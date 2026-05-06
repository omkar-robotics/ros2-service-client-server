# ROS2 Service Client-Server Architecture

A professional ROS2 service communication project demonstrating custom `.srv` interfaces, request-response workflows, and modular ROS2 package architecture using Python.

---

# Overview

This project demonstrates how to build a complete ROS2 service communication system using:

* Custom ROS2 service interfaces (`.srv`)
* ROS2 Python nodes (`rclpy`)
* Client-server architecture
* Request-response communication model
* Modular ROS2 workspace organization
* Professional package separation strategy

The project follows an industry-style ROS2 architecture by separating:

* Interface definitions
* Executable application nodes

This design improves scalability, maintainability, and code organization for robotics applications.

---

# Project Architecture

```bash
my_service_ws/
└── src/
    ├── my_service_interfaces/
    │   ├── srv/
    │   │   └── ResetCounter.srv
    │   ├── CMakeLists.txt
    │   └── package.xml
    │
    └── my_service_pkg/
        ├── my_service_pkg/
        │   ├── __init__.py
        │   ├── reset_counter_server.py
        │   └── reset_counter_client.py
        │
        ├── package.xml
        ├── setup.py
        └── setup.cfg
```

---

# System Workflow

## Service Communication Flow

```text
Client Node
    │
    │ Request
    ▼
Service Server
    │
    │ Process Request
    │
    ▼
Response Returned
    │
    ▼
Client Receives Response
```

---

# Technologies Used

| Technology    | Purpose                              |
| ------------- | ------------------------------------ |
| ROS2          | Robotics middleware framework        |
| Python        | Service client/server implementation |
| rclpy         | ROS2 Python client library           |
| colcon        | ROS2 build system                    |
| Custom `.srv` | Request-response communication       |
| Git & GitHub  | Version control and project hosting  |

---

# ROS2 Concepts Demonstrated

This project covers several important ROS2 concepts:

* ROS2 workspaces
* ROS2 package creation
* `ament_cmake`
* `ament_python`
* Custom service interfaces
* Service servers
* Service clients
* Asynchronous service requests
* ROS2 package dependencies
* ROS2 build and source workflow
* Modular package architecture

---

# Custom Service Definition

File:

```bash
my_service_interfaces/srv/ResetCounter.srv
```

Service definition:

```text
int64 reset_value
---
bool success
string message
```

## Request

| Field       | Type  | Description       |
| ----------- | ----- | ----------------- |
| reset_value | int64 | New counter value |

## Response

| Field   | Type   | Description                    |
| ------- | ------ | ------------------------------ |
| success | bool   | Operation success status       |
| message | string | Informational response message |

---

# Service Server

The server node:

* Creates a ROS2 service
* Waits for incoming requests
* Processes request data
* Updates internal counter state
* Sends response back to client

## Server Responsibilities

* Handle service requests
* Process reset values
* Generate response messages
* Maintain counter state

---

# Service Client

The client node:

* Connects to service server
* Sends reset requests
* Waits for service response
* Displays result to terminal

## Client Responsibilities

* Create service request
* Send asynchronous request
* Wait for response completion
* Display response information

---

# Build Instructions

## Clone Repository

```bash
git clone https://github.com/omkar-robotics/ros2-service-client-server.git
```

---

## Navigate to Workspace

```bash
cd ros2-service-client-server
```

---

## Build Workspace

```bash
colcon build
```

---

## Source Workspace

```bash
source install/setup.bash
```

---

# Running the Project

## Run Service Server

Open terminal 1:

```bash
source install/setup.bash
ros2 run my_service_pkg reset_counter_server
```

Expected output:

```text
[INFO] Reset Counter Service Started
```

---

## Run Service Client

Open terminal 2:

```bash
source install/setup.bash
ros2 run my_service_pkg reset_counter_client
```

Expected output:

```text
Success: True
Message: Counter reset to 100
```

---

# ROS2 Command-Line Verification

## Verify Packages

```bash
ros2 pkg list | grep my_service
```

---

## Verify Services

```bash
ros2 service list
```

---

## Verify Service Type

```bash
ros2 service type /reset_counter
```

---

## Display Interface Definition

```bash
ros2 interface show my_service_interfaces/srv/ResetCounter
```

---

# Manual Service Call

You can manually call the service from terminal:

```bash
ros2 service call /reset_counter my_service_interfaces/srv/ResetCounter "{reset_value: 50}"
```

Expected output:

```text
success: true
message: Counter reset to 50
```

---

# Key Learning Outcomes

By completing this project, the following ROS2 concepts were implemented and understood:

* ROS2 package organization
* Interface package separation
* Python package setup
* Custom service generation
* Client-server communication
* Request-response workflows
* ROS2 build systems
* ROS2 dependency management
* Workspace sourcing
* GitHub project deployment

---

# Professional ROS2 Design Principle

This project follows the ROS2 best practice of separating:

| Package Type        | Responsibility                        |
| ------------------- | ------------------------------------- |
| Interface Package   | `.msg`, `.srv`, `.action` definitions |
| Application Package | Executable Python/C++ nodes           |

This architecture is commonly used in:

* Robotics software systems
* Autonomous robots
* Industrial automation
* Navigation systems
* Multi-node distributed robotics applications

---

# Future Improvements

Possible future enhancements:

* Add asynchronous clients
* Add multiple services
* Add ROS2 Actions
* Add parameter server integration
* Add launch files
* Add logging system
* Add lifecycle nodes
* Add unit testing
* Integrate with Navigation2
* Integrate with TurtleBot4

---

# Author

## Omkar Honrao

Electrical Engineering Student | ROS2 & Robotics Enthusiast

### Areas of Interest

* Robotics
* ROS2
* Autonomous Systems
* Artificial Intelligence
* Machine Learning
* Industrial Automation
* Embedded Systems

---

