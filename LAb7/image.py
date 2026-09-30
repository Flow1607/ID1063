import os
import numpy as np
from PIL import Image

# 1. Load and convert to RGB array
img = Image.open("input.jpg")
rgb = np.array(img)

# 2. Vectorized grayscale conversion (Luminance formula)
weights = np.array([0.2989, 0.5870, 0.1140])
gray = np.dot(rgb[..., :3], weights).astype(np.uint8)

# 3. Save the processed image
output_path = "output_gray.jpg"
Image.fromarray(gray).save(output_path)

# 4. Open in Android's default image viewer
os.system(f"termux-open {output_path}")

