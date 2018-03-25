#pragma once

enum class NotationObjectType
{
    Line = 0x0, // Brace, bracket, line
    Clef = 0x1, // Clef
    Time =  0x2, // Time signature
    Note =  0x3, // Note
    Rest = 0x4, // Rest
    Accidental =  0x5, // Accidentals/key signatures
    Tempo = 0x6, // Tempo
    OctaveShift = 0x7, // Octave shift
    Repetition = 0x8, // Reprise, volta
    Pedal = 0x9, // Pedal
    Text = 0xA, // Text
    Meta = 0xB, // Composition metainfo
};

// Brace, bracket, Line
enum class LineType
{
    Bar = 0x00, // Usual bar line
    Double = 0x10, // Double bar line
    BoldDouble = 0x20, // Bold double bar line
    Dotted = 0x30, // Dotted bar line
    Bracket = 0x40, // Bracket
    Brace = 0x50, // Brace (accolade)

    NextObjectOnSameStaff = 0x0,
    NextObjectOnNewStaff = 0x8000,
};

enum class ClefType
{
    Treble = 0x0,
    Bass = 0x10,
    Alto = 0x20,
    Tenor = 0x30,
    Neutral = 0x40,
    Treble1OctavaUp = 0x50,
    Treble2OctavaUp = 0x60,
    Treble1OctavaDown = 0x70,
    Treble2OctavaDown = 0x80,
    Bass1OctavaUp = 0x90,
    Bass2OctavaUp = 0xA0,
    Bass1OctavaDown = 0xB0,
    Bass2OctavaDown = 0xC0,
    Tablature = 0xD0,
};

enum class NeutralClefType
{
    Lines5 = 0x0,
    Bar5 = 0x1,
    Lines1 = 0x2,
    Bar1 = 0x3,
};

enum class TimeType
{
    Common = 0x0,
    AllaBreve = 0x10,
    Other = 0x20,
};

enum class Length
{
    Large = 0x0,
    Long = 0x10,
    Breve = 0x20,
    Whole = 0x30,
    Half = 0x40,
    Quarter = 0x50,
    Eighth = 0x60,
    Sixteenth = 0x70,
    ThirtySecond = 0x80,
    SixtyFourth = 0x90,
    HundredTwentyEigth = 0xA0,
    TwoHundredTwentySixth = 0xB0,
    Multimeasure = 0xC0,
    BreathMark = 0xD0,
    Caesura = 0xE0,
};

enum class LengthIncrease
{
    None = 0x0,
    Dot = 0xC0,
    TwoDots = 0xE0,
    ThreeDots = 0xF0,
};

enum class Pitch
{
    LineMinus6 = 0x00,
    BetweenMinus6AndMinus5 = 0x01,
    LineMinus5 = 0x02,
    BetweenMinus5AndMinus4 = 0x03,
    LineMinus4 = 0x04,
    BetweenMinus4AndMinus3 = 0x05,
    LineMinus3 = 0x06,
    BetweenMinus3AndMinus2 = 0x07,
    LineMinus2 = 0x08,
    BetweenLineMinus2AndMinus1 = 0x09,
    LineMinus1 = 0x0A,
    BetweenMinus1And1 = 0x0B,
    Line1 = 0x0C,
    Between1And2 = 0x0D,
    Line2 = 0x0E,
    Between2And3 = 0x0F,
    Line3 = 0x10,
    Between3And4 = 0x11,
    Line4 = 0x12,
    Between4And5 = 0x13,
    Line5 = 0x14,
    Between5AndPlus1 = 0x15,
    LinePlus1 = 0x16,
    BetweenPlus1AndPlus2 = 0x17,
    LinePlus2 = 0x18,
    BetweenPlus2AndPlus3 = 0x19,
    LinePlus3 = 0x1A,
    BetweenPlus3AndPlus4 = 0x1B,
    LinePlus4 = 0x1C,
    BetweenPlus4AndPlus5 = 0x1D,
    LinePlus5 = 0x1E,
    BetweenPlus5AndPlus6 = 0x1F,
    LinePlus6 = 0x20,
};

enum class Dynamics
{
    Nothing = 0x0,
    pppppp = 0x1,
    ppppp = 0x2,
    pppp = 0x3,
    ppp = 0x4,
    pp = 0x5,
    p = 0x6,
    mp = 0x7,
    mf = 0x8,
    f = 0x9,
    ff = 0xA,
    fff = 0xB,
    ffff = 0xC,
    fffff = 0xD,
    ffffff = 0xE,
    sfz = 0xF,
};

enum class NotesAttributes1
{
    None = 0x0,
    CrescBegin = 0x10,
    CrescEnd = 0x20,
    DimBegin = 0x30,
    DimEnd = 0x40,
    SlurBegin = 0x50,
    SlurEnd = 0x60,
    GlissandoBegin = 0x70,
    GlissandoEnd = 0x80,
    ArpeggioBegin = 0x90,
    ArpeggioEnd = 0xA0,
    TupletBegin = 0xB0,
    TupletEnd = 0xC0,
    TremoloStart = 0xD0,
    TremoloEnd = 0xE0,
};

enum class Articulation
{
    None = 0x0,
    Staccato = 0x4,
    Staccatissimo = 0x8,
    Accent = 0xC,
    Tenuto = 0x14,
    Marcato = 0x18,
    LeftHandPizzicato = 0x1C,
    SnapPizzicato = 0x14,
    OpenNote = 0x18,
    Fermata = 0x1C,
    UpBow = 0x24,
    DownBow = 0x28,
    Vibrato = 0x2C,
    Trill = 0x34,
    UpperMordent = 0x38,
    LowerMordent = 0x3C,
    Gruppetto = 0x44,
    Appoggiatura = 0x48,
    Acciaccatura = 0x4C,
};

enum class AccidentalType
{
    Natural = 0x00,
    Sharp = 0x01,
    Flat = 0x02,
    DoubleSharp = 0x03,
    DoubleFlat = 0x04,
    Demisharp = 0x05,
    Demiflat = 0x06,
    Sesquisharp = 0x07,
    Sesquiflat = 0x08,
    NaturalBracketed = 0x09,
    SharpBracketed = 0x0A,
    FlatBracketed = 0x0B,
    DoubleSharpBracketed = 0x0C,
    DoubleFlatBracketed = 0x0D,
    DemiSharpBracketed = 0x0E,
    DemiFlatBracketed = 0x0F,
};

enum class OctaveShiftType
{
    Up = 0x00,
    Down = 0x10,
    Up2 = 0x20,
    Down2 = 0x30,
};

enum class RepetitionType
{
    RepeatStart = 0x00,
    RepeatEnd = 0x10,
    VoltaStart = 0x20,
    VoltaEnd = 0x30,
    DaCapo = 0x40,
    DalSegno = 0x50,
    Segno = 0x60,
    Coda = 0x70,
    Simile1 = 0x80,
    Simile2 = 0x90,
};
