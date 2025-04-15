<p align="center"> <img src="https://img.shields.io/badge/Cub3D-Linux%20Only-blue?style=for-the-badge" alt="Cub3D Badge"> <img src="https://img.shields.io/github/stars/LeonardoDevelopper/Minishell?style=for-the-badge" alt="GitHub Stars Badge"> <img src="https://img.shields.io/badge/Made%20With-C%20Language-green?style=for-the-badge" alt="C Language Badge"> </p> <h1 align="center">RayCaster2D</h1> <p align="center"> A simplified implementation of raycasting in 2D view & <b>Leonardo Jorge</b> 🛠️</p>
🌟 <h1>Description</h1>
cub3D is a 3D game project inspired by the classic Wolfenstein 3D, developed as part of the 42 curriculum. The objective is to create a first-person perspective (FPS) engine using raycasting, a technique that simulates 3D rendering in a 2D environment.

This project serves as an introduction to graphics programming and game development, leveraging the MiniLibX library for rendering. It involves parsing a map, implementing raycasting for wall rendering, handling textures, and simulating basic player movement.

The ultimate goal is to build a functional and visually appealing FPS-like experience, laying the groundwork for more advanced graphics programming projects.

🧰 <h1>Key Features</h1>

<p>✅ Raycasting Engine – Implements a raycasting algorithm to 2D view.</p>
<p>✅ Wall Rendering with Textures – Loads and applies textures to walls.</p>
<p>✅ Player Movement & Rotation – Enables smooth movement.</p>
<p>✅ MiniLibX Integration – Uses the MiniLibX library for window management, drawing, and event handling.</p>
<p>✅ Basic Collision Detection – Prevents the player from walking through walls.</p>

<h1>Potential Enhancements</h1>
<p>🚀 Sprite Rendering – Add objects (e.g., enemies, doors) for interaction.</p>
<p>🚀 Lighting Effects – Implement shading for more depth and realism.</p>

The project provides a solid foundation in graphics programming, preparing for more complex game engines and rendering techniques in future projects.

✨ <h1>Key Skills Gained</h1>
<table>
<tr>
    <td>
        <h4>Skills</h4>
    </td>
    <td>
        <h4>Pts</h4>
    </td>
</tr>
<tr>
    <td>
        <h4>🔢 Algorithm & AI</h4>
    </td>
    <td>
        <h4>10/10</h4>
    </td>
</tr>
<tr>
    <td>
        <h4>🧑‍💻 Interactive Programming</h4>
    </td>
    <td>
        <h4>10/10</h4>
    </td>
</tr>
<tr>
    <td>
        <h4>📈 Graphics</h4>
    </td>
    <td>
        <h4>10/10</h4>
    </td>
</tr>
</table>


⚙️ <h1>Setup</h1>
<h3>Prerequisites</h3>

<h4>Ensure you have the following before getting started:</h4>

<ul>
    <li>A Linux-based operating system 🐧</li>
    <li>Libraries and tools Required by X11server, minilibX library</li>
    <li>The make utility</li>
</ul>


🚀 <h1>How to Compile</h1>

```bash
# get libft:
git clone https://github.com/LeonardoDevelopper/libft

```

```bash
# get minilibX:
git clone https://github.com/42Paris/minilibx-linux minilibx

```

```bash
# Clone the repository:
git clone https://github.com/LeonardoDevelopper/raycaster2D

```

```bash
# move libft to libs directory:
mv libft/ raycaster2D/assets/

```

```bash
# move minilibx to libs directory:
mv minilibx/ raycaster2D/assets/

```

```bash
# turn in directory:
cd raycaster2D

```

```bash
# Build the project:
make

```

📂 <h1>Project Structure</h1>
<pre>
    <code>
        minishell/
        ├── include/         # Header files
        ├── assets/          # sprits, maps files
        ├── libs/            # Static libraries
        ├── obj/             # Object files
        ├── src/             # Source files
        ├── Makefile         # Build script
        └── README.md        # Project documentation
    </code>
</pre>

🐧 <h1>Usage Example</h1>
```bash
# Run the bin:
./rc

```
<p>
    <img src="https://github.com/LeonardoDevelopper/raycaster2D/blob/main/preview1.png" width="700px;" height="500px;" alt="Leonardo Jorge"/>
</p>

🐧 <h1>Mods</h1>
```bash
# build with:
make re TEXTURE=false CONTROLES=mouse FOV=2*PI MAP=assets/map_big.ber NUM_RAYS=1000 TILE_SIZE=50
# and run the bin
./rc
```
<p>
    <img src="https://github.com/LeonardoDevelopper/raycaster2D/blob/main/preview2.png" width="700px;" height="500px;" alt="Leonardo Jorge"/>
</p>

💡 <h1>Help</h1>

🚧 <h1>Important Notes</h1>
This project is Linux-only.
The binary produced (rc) is specific to Linux environments.<br />
👥 <h1>Authors</h1>
<table> <tr><td align="center"><a href="https://github.com/LeonardoDevelopper"><img src="https://avatars.githubusercontent.com/u/113784384?v=4" width="100px;" alt="Leonardo Jorge"/><br /><sub><b>Leonardo Jorge</b></sub></a></td> </tr> </table>
Built with ❤️ for educational purposes.

📜 License
This project is licensed under the global License.

