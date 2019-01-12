extern void __fastcall__ dg (void);     /* Initial DHGR */
extern void __fastcall__ dhclr(void);   /* Clear DHGR screen */
extern void __fastcall__ bkgnd(void);   /* Change background color */
extern void __fastcall__ pen(void);     /* Set brush to 1-bit mask (monochrome) */
extern void __fastcall__ hue(unsigned char c);
extern void __fastcall__ brush(void); /* Set brush to 4-bit mask */
extern void __fastcall__ dot_at (unsigned x, unsigned char y); /* Plot pixel at x, y */
extern void __fastcall__ line_to (unsigned x, unsigned char y); /* Draw line */
