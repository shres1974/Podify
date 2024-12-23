# **Podify: A Podcast Network Built in C++**

Welcome to **Podify**, a podcast network application I built as part of OOP. It’s a project that brings podcasts and episodes to life while showcasing some advanced programming concepts in C++. Think of it as a simplified Spotify for podcasts, but with a focus on the backend and design patterns.

---

## **What Does Podify Do?**

- **Manages Podcasts and Episodes**  
  You can create podcasts, add episodes, and organize them efficiently.  

- **Searches with Style**  
  Find episodes based on their host, category, or both. The search system uses advanced object-oriented techniques like polymorphism.  

- **Builds Playlists**  
  Add episodes to a playlist based on your search criteria.  

- **Customizable Playback**  
  Play episodes in **audio-only** mode or spice it up with ASCII art in **audio-and-video** mode.  

---

## **Why I Built This**

This project was an opportunity to dive deep into:
- Advanced C++ concepts like **operator overloading**, **templates**, and **polymorphism**.  
- Software design patterns like the **Factory Pattern** (for creating objects) and the **Strategy Pattern** (for changing playback behavior dynamically).  
- Handling **dynamic memory management**, which is both powerful and challenging in C++.  

Above all, it taught me how to design modular and scalable software—skills I’m excited to bring into real-world development.

---

## **How It Works**

1. **Search Episodes:**  
   Use one of three search types to filter episodes:  
   - By **host**  
   - By **category**  
   - Or both (host OR category)  

2. **Build Playlists:**  
   Add all matching episodes to a playlist for easy playback.

3. **Play Episodes:**  
   Enjoy your playlist with either:  
   - **Audio playback** (displays text content), or  
   - **Audio + Video playback** (adds fun ASCII visuals).  

---

## **Tech Highlights**

Here’s what’s under the hood:
- **C++ Features:**  
  Templates, operator overloading, polymorphism, and multiple inheritance.  

- **Design Patterns:**  
  - **Factory Pattern:** Handles object creation (e.g., podcasts and episodes).  
  - **Strategy Pattern:** Lets you dynamically switch between audio-only and video playback.  

- **Memory Management:**  
  Objects are created and destroyed dynamically, ensuring efficient use of memory.

---

## **How to Run Podify**

1. **Clone the Repository:**  
   ```bash
   git clone https://github.com/your-username/Podify.git
   cd Podify
Build the Project:
make
Run the Application:
./Podify
Test the Application:
Run the TestControl class for built-in tests.
What I Learned

## Building Podify was a great way to:

Write clean and reusable code by separating logic into modular classes.
Work with real-world software concepts like design patterns and memory management.
Test and debug efficiently—this project was autograded, so crash-free code was essential!
Future Ideas

While Podify is complete as a course project, here’s what I’d love to add someday:

A GUI for a more interactive user experience.
Integration with APIs to fetch real podcast data.
Enhanced search filters, like finding episodes by duration or keywords.
About Me

I’m a 3rd-year Computer Science student at Carleton University, specializing in Software Engineering. I’m passionate about creating software that’s as functional as it is user-friendly. This project reflects my technical skills and my curiosity to learn and improve.
