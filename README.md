# 🦄 Render_in_C

Welcome to **Render_in_C**!
This project is a **basic 3D software renderer written in C**, designed to be lightweight, educational, and a solid foundation for learning computer graphics from scratch. Here, you'll explore and experiment with core rendering techniques like **rasterization**, **shading**, geometric primitives, and simple lighting effects—all in pure C.

---

## 🚀 Features

- **Software rendering**: No OpenGL/DirectX—everything is implemented from scratch in C.
- **Triangle rasterization** and basic geometric primitives.
- **3D transformations**: World, view, and projection matrices.
- **Texturing and color**: Switch between wireframe, color, and textured rendering modes.
- **Windows GUI** using GDI for framebuffer display and input.
- **Modular, educational code**: Perfect for learning the fundamentals of 3D graphics.

---

## 🖥️ Screenshot

> *([Render](https://github.com/gragi-1/Render_in_C/blob/main/Render3D.gif)*

---

## 📦 Project Structure

- `main.c`: Entry point, main loop, and rendering logic.
- `geometric_calculations.*`: Vertex operations, interpolation, and geometry.
- `math.*`: Linear algebra, matrices, and vectors.
- `rendering.*`: Rasterization pipeline and triangle rendering.
- `rendering_device.*`: Framebuffer, z-buffer, and texture management.
- `transform.*`: 3D transformations and projection.
- `win32_graphics.*`: Windows windowing and event handling.

---

## ⚙️ Requirements

- **Operating System:** Windows (uses GDI for window and framebuffer)
- **Compiler:** GCC (MinGW recommended) or MSVC
- **Libraries:** `gdi32` (included with Windows)

---

## 🛠️ Compilation

Compile the project with (GCC/MinGW):

```sh
gcc -O3 main.c geometric_calculations.c math.c rendering.c rendering_device.c transform.c win32_graphics.c -o GOATY_GOAT_RENDER.exe -lgdi32
```

---

## 🕹️ Usage

1. **Run** the binary `GOATY_GOAT_RENDER.exe`.
2. **Controls:**
   - `ESC`: Exit
   - Left/Right arrows: Rotate the cube
   - Up/Down arrows: Move camera forward/backward
   - `Space`: Switch rendering mode (texture, color, wireframe)

---

## 📚 How does it work?

- The renderer implements a basic 3D pipeline: vertex transformation, projection, clipping, rasterization, and shading.
- Framebuffer and z-buffer are managed manually in memory.
- The 3D cube is rendered using triangles, and you can toggle between different visualization modes.
- All code is modular and educational—perfect for learning or tinkering.

---

## 🧑‍💻 Why is this important?

- **Deep learning:** Understand how 3D graphics work under the hood, without the magic of external APIs.
- **Foundation for advanced projects:** Expand it with lighting, advanced textures, OBJ models, and more.
- **Inspiration:** Ideal for students, enthusiasts, and makers!

---

## 📝 License

MIT License.  
Developed with passion by [gragi-1](https://github.com/gragi-1).

---

Ready to dive into the world of 3D graphics?  
Clone, compile, experiment, and take your creativity to the next level! 🚀
