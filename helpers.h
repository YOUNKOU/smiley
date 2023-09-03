#include "bmp.h"

// colorize image
void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Define the color you want to use for black pixels
    RGBTRIPLE color;
    color.rgbtRed = 255;   // Red component
    color.rgbtGreen = 0;   // Green component
    color.rgbtBlue = 0;    // Blue component

    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                // Change the color of black pixels
                image[i][j] = color;
            }
        }
    }
}
