from PIL import Image, ImageDraw, ImageFont

# Create a new image with a white background
width, height = 800, 400
background_color = "white"
image = Image.new("RGB", (width, height), background_color)

# Define the quote text and font
quote = ("Seeing the world through just your own lens limits your vision; "
         "open your eyes to others' views to see the whole truth.")
font_path = "/usr/share/fonts/truetype/dejavu/DejaVuSans-Bold.ttf"  # Using DejaVuSans as a substitute for Arial/Helvetica
font_size = 20
font = ImageFont.truetype(font_path, font_size)

# Initialize ImageDraw
draw = ImageDraw.Draw(image)

# Calculate the text size and position
text_width, text_height = draw.textsize(quote, font=font)
x = (width - text_width) / 2
y = (height - text_height) / 2

# Add the text to the image
draw.text((x, y), quote, font=font, fill="black")

# Display the image
image.show()
