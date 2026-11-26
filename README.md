# 3D Traffic Flow & Queueing Simulator
### All codes (flat structure – short names)

## Files

```
OOP1.cpp   → OOP CO1 (Vehicle Hierarchy)
OOP2.cpp   → OOP CO2 (Reduce Complexity)
OOP3.cpp   → OOP CO3 (Critical Thinking)
OOP4.cpp   → OOP CO4 (Logic Building)

DS1.cpp    → DS CO1 (Array / CityGrid)
DS2.cpp    → DS CO2 (Linked List)
DS3.cpp    → DS CO3 (Stack + Queue)
DS4.cpp    → DS CO4 (Searching & Sorting)
DS5.cpp    → DS CO5 (Hashing)

CG1.cpp    → CG CO1 (OpenGL Primitives)
CG2.cpp    → CG CO2 (Transformations)
CG3.cpp    → CG CO3 (2D/3D Objects)
CG4.cpp    → CG CO4 (Projection & Viewing)
CG5.cpp    → CG CO5 (Clipping)
CG6.cpp    → CG CO6 (Color & Light)

COA1.txt   → COA CO1
COA2.asm   → COA CO2 (Assembly)
COA3.txt   → COA CO3
COA4.txt   → COA CO4

main.cpp   -> FULL INTEGRATED SIMULATOR (Entry point & GLUT callbacks)
modules/   -> Course-Outcome modules split from main.cpp:
              OOP_TrafficControl.h/.cpp    (2310261L CO1-CO4)
              DS_DataStructures.h/.cpp     (2310214L CO1-CO5)
              COA_ProcessorPipeline.h/.cpp (2310221L CO1-CO4)
              CG_Scene3D.h/.cpp            (2310218L CO1-CO4, CO6)
              CG_ClippingAndHUD.h/.cpp     (2310218L CO1, CO4, CO5)
              SimState.h                   (Shared state & constants)
common/    -> Shared classes
```

## Compile Examples

```bash
# OOP / DS
g++ OOP1.cpp -o oop1
./oop1

# Computer Graphics
g++ CG1.cpp -o cg1 -lGL -lGLU -lglut
./cg1

# Full Integrated Simulator (Linux)
g++ main.cpp common/*.cpp modules/*.cpp -o traffic_sim -lglut -lGLU -lGL
./traffic_sim

# Full Integrated Simulator (Windows, MSYS2 UCRT64 shell with freeglut)
g++ main.cpp common/*.cpp modules/*.cpp -o traffic_sim.exe -lfreeglut -lopengl32 -lglu32
./traffic_sim.exe
```

## What main.cpp integrates

| Subject | Shown in the simulator window |
|---------|-------------------------------|
| OOP CO1-CO4 | Vehicle -> Car/Bus/EmergencyVehicle, virtual `move()` / `specialBehavior()`, TrafficController with signal cycle, car-following and emergency pre-emption |
| DS CO1 | CityGrid 12x12 array generates the 3D city and the minimap |
| DS CO2 | Road = linked list of all vehicles |
| DS CO3 | Toll booth = circular queue (vehicles wait in the plaza), served vehicles pushed on a stack |
| DS CO4 | Fleet ranked with insertion sort (O cycles key), linear search count shown next to hashing |
| DS CO5 | Hash table `id % 17` with chaining, H to look up the next id |
| CG CO1-CO3 | Primitives, translate/rotate/scale (wheels, beacon, spawn-in), 3D vehicles, buildings, trees, tunnels |
| CG CO4 | Perspective orbit camera and orthographic top view (P) |
| CG CO5 | Cohen-Sutherland line clipping + glClipPlane window (K) |
| CG CO6 | Lighting, materials, day/night (N), headlights, lit windows |
| COA CO1-CO4 | EAX/EBX/ECX/EIP + flags for the selected vehicle's `MOV/ADD/CMP/JG` update, 5-stage pipeline diagram |

**Controls in main.cpp:**
- Mouse drag / arrow keys -> orbit camera, wheel or + / - -> zoom
- Tab -> select next vehicle, F -> follow it
- P -> perspective / top orthographic, N -> day / night, K -> clipping
- 1 / 2 / 3 -> add car / bus / ambulance
- O -> change sort key, H -> hash lookup
- Space -> pause, [ ] -> simulation speed, U -> hide panels
- S -> print status to console, Q / Esc -> quit
