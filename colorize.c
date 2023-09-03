void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Define the color you want to use
    RGBTRIPLE color;
    color.rgbtRed = 255;    // Red value (0-255)
    color.rgbtGreen = 0;    // Green value (0-255)
    color.rgbtBlue = 0;     // Blue value (0-255)

    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black (RGB values are all 0)
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                // Change the color of the pixel
                image[i][j] = color;
            }
        }
    }
}
