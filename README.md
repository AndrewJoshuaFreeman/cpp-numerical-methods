## Overview

This repository contains a collection of C++ tutorials, experiments, and supporting code focused on
linear algebra, vector mathematics, and geometric transformations. The project is structured as a
small engine-style sandbox to demonstrate math concepts in a practical, visual, and interactive way.

The emphasis is on understanding how vectors, matrices, coordinate spaces, and transformations are
used in real-time applications such as graphics, input handling, and simulation.

---

## Project Structure

### Core Math & Geometry
Foundational math types and utilities used throughout the project.

- Vec2.h
- RectF.h / RectF.cpp
- Colors.h
- ChiliMath.h
- CoordinateTransformer.h

These files cover vector operations, basic geometry, and coordinate-space transformations.

---

### Engine & Application Framework
Core engine-style scaffolding used to host and visualize math concepts.

- Engine.vcxproj / Engine.vcxproj.filters
- Main.cpp
- Game.h / Game.cpp
- Engine core utilities and helpers

This layer exists primarily to provide a structured environment for experimentation.

---

### Graphics & Rendering
Rendering pipeline components that make vector math and transformations visible.

- Graphics.h / Graphics.cpp
- Drawable.h
- FramebufferVS.hlsl
- FramebufferPS.hlsl
- Camera.h
- MouseCameraController.h

Includes camera movement, screen-space transformations, and basic rendering abstractions.

---

### Entities & Simulation Objects
Simple objects used to demonstrate motion, transformations, and spatial reasoning.

- Entity.h
- Ball.h
- Plank.h
- Star.h
- SpawnPoint.h

These entities rely heavily on vector math for positioning, movement, and interaction.

---

### Input & Timing
Utilities for user interaction and time-based updates.

- Keyboard.h / Keyboard.cpp
- Mouse.h / Mouse.cpp
- FrameTimer.h / FrameTimer.cpp

Used to drive real-time transformations and interactive examples.

---

### Audio (XAudio2)
Minimal audio support for completeness and experimentation.

- Sound.h / Sound.cpp
- SoundEffect.h
- XAudio2 headers and libraries
- arkpad.wav

Audio is not the focus of the repository, but serves as an example of integrating subsystems.

---

## Notes

- This repository is intended as an educational sandbox rather than a polished engine.
- Code prioritizes clarity and experimentation over completeness or abstraction.
- Math concepts are demonstrated in context, rather than in isolation.

---

## Focus Areas

- Linear algebra in C++
- Vector and coordinate-space transformations
- Practical application of math in graphics and simulation
- Building intuition through visual and interactive examples
