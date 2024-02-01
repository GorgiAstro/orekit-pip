#ifndef org_orekit_gnss_ObservationType_H
#define org_orekit_gnss_ObservationType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class MeasurementType;
      class SatelliteSystem;
      class Frequency;
      class SignalCode;
      class ObservationType;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {

      class ObservationType : public ::java::lang::Enum {
       public:
        enum {
          mid_getFrequency_4ed6e66577d34d61,
          mid_getMeasurementType_0c31fda13b2c1960,
          mid_getSignalCode_9c91ddd954949465,
          mid_valueOf_be5bc086d790ae47,
          mid_values_821406dca9be187b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ObservationType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ObservationType(const ObservationType& obj) : ::java::lang::Enum(obj) {}

        static ObservationType *C0;
        static ObservationType *C1;
        static ObservationType *C1A;
        static ObservationType *C1B;
        static ObservationType *C1C;
        static ObservationType *C1D;
        static ObservationType *C1E;
        static ObservationType *C1I;
        static ObservationType *C1L;
        static ObservationType *C1M;
        static ObservationType *C1P;
        static ObservationType *C1Q;
        static ObservationType *C1S;
        static ObservationType *C1W;
        static ObservationType *C1X;
        static ObservationType *C1Y;
        static ObservationType *C1Z;
        static ObservationType *C2;
        static ObservationType *C2C;
        static ObservationType *C2D;
        static ObservationType *C2I;
        static ObservationType *C2L;
        static ObservationType *C2M;
        static ObservationType *C2P;
        static ObservationType *C2Q;
        static ObservationType *C2S;
        static ObservationType *C2W;
        static ObservationType *C2X;
        static ObservationType *C2Y;
        static ObservationType *C3I;
        static ObservationType *C3Q;
        static ObservationType *C3X;
        static ObservationType *C4A;
        static ObservationType *C4B;
        static ObservationType *C4X;
        static ObservationType *C5;
        static ObservationType *C5A;
        static ObservationType *C5B;
        static ObservationType *C5C;
        static ObservationType *C5D;
        static ObservationType *C5I;
        static ObservationType *C5P;
        static ObservationType *C5Q;
        static ObservationType *C5X;
        static ObservationType *C5Z;
        static ObservationType *C6;
        static ObservationType *C6A;
        static ObservationType *C6B;
        static ObservationType *C6C;
        static ObservationType *C6D;
        static ObservationType *C6E;
        static ObservationType *C6I;
        static ObservationType *C6L;
        static ObservationType *C6P;
        static ObservationType *C6Q;
        static ObservationType *C6S;
        static ObservationType *C6X;
        static ObservationType *C6Z;
        static ObservationType *C7;
        static ObservationType *C7D;
        static ObservationType *C7I;
        static ObservationType *C7P;
        static ObservationType *C7Q;
        static ObservationType *C7X;
        static ObservationType *C7Z;
        static ObservationType *C8;
        static ObservationType *C8D;
        static ObservationType *C8I;
        static ObservationType *C8P;
        static ObservationType *C8Q;
        static ObservationType *C8X;
        static ObservationType *C9A;
        static ObservationType *C9B;
        static ObservationType *C9C;
        static ObservationType *C9X;
        static ObservationType *CA;
        static ObservationType *CB;
        static ObservationType *CC;
        static ObservationType *CD;
        static ObservationType *D0;
        static ObservationType *D1;
        static ObservationType *D1A;
        static ObservationType *D1B;
        static ObservationType *D1C;
        static ObservationType *D1D;
        static ObservationType *D1E;
        static ObservationType *D1I;
        static ObservationType *D1L;
        static ObservationType *D1M;
        static ObservationType *D1N;
        static ObservationType *D1P;
        static ObservationType *D1S;
        static ObservationType *D1W;
        static ObservationType *D1X;
        static ObservationType *D1Y;
        static ObservationType *D1Z;
        static ObservationType *D2;
        static ObservationType *D2C;
        static ObservationType *D2D;
        static ObservationType *D2I;
        static ObservationType *D2L;
        static ObservationType *D2M;
        static ObservationType *D2N;
        static ObservationType *D2P;
        static ObservationType *D2Q;
        static ObservationType *D2S;
        static ObservationType *D2W;
        static ObservationType *D2X;
        static ObservationType *D2Y;
        static ObservationType *D3I;
        static ObservationType *D3Q;
        static ObservationType *D3X;
        static ObservationType *D4A;
        static ObservationType *D4B;
        static ObservationType *D4X;
        static ObservationType *D5;
        static ObservationType *D5A;
        static ObservationType *D5B;
        static ObservationType *D5C;
        static ObservationType *D5D;
        static ObservationType *D5I;
        static ObservationType *D5P;
        static ObservationType *D5Q;
        static ObservationType *D5X;
        static ObservationType *D5Z;
        static ObservationType *D6;
        static ObservationType *D6A;
        static ObservationType *D6B;
        static ObservationType *D6C;
        static ObservationType *D6D;
        static ObservationType *D6E;
        static ObservationType *D6I;
        static ObservationType *D6L;
        static ObservationType *D6P;
        static ObservationType *D6Q;
        static ObservationType *D6S;
        static ObservationType *D6X;
        static ObservationType *D6Z;
        static ObservationType *D7;
        static ObservationType *D7D;
        static ObservationType *D7I;
        static ObservationType *D7P;
        static ObservationType *D7Q;
        static ObservationType *D7X;
        static ObservationType *D7Z;
        static ObservationType *D8;
        static ObservationType *D8D;
        static ObservationType *D8I;
        static ObservationType *D8P;
        static ObservationType *D8Q;
        static ObservationType *D8X;
        static ObservationType *D9A;
        static ObservationType *D9B;
        static ObservationType *D9C;
        static ObservationType *D9X;
        static ObservationType *DA;
        static ObservationType *DB;
        static ObservationType *DC;
        static ObservationType *DD;
        static ObservationType *L0;
        static ObservationType *L1;
        static ObservationType *L1A;
        static ObservationType *L1B;
        static ObservationType *L1C;
        static ObservationType *L1D;
        static ObservationType *L1E;
        static ObservationType *L1I;
        static ObservationType *L1L;
        static ObservationType *L1M;
        static ObservationType *L1N;
        static ObservationType *L1P;
        static ObservationType *L1S;
        static ObservationType *L1W;
        static ObservationType *L1X;
        static ObservationType *L1Y;
        static ObservationType *L1Z;
        static ObservationType *L2;
        static ObservationType *L2C;
        static ObservationType *L2D;
        static ObservationType *L2I;
        static ObservationType *L2L;
        static ObservationType *L2M;
        static ObservationType *L2N;
        static ObservationType *L2P;
        static ObservationType *L2Q;
        static ObservationType *L2S;
        static ObservationType *L2W;
        static ObservationType *L2X;
        static ObservationType *L2Y;
        static ObservationType *L3I;
        static ObservationType *L3Q;
        static ObservationType *L3X;
        static ObservationType *L4A;
        static ObservationType *L4B;
        static ObservationType *L4X;
        static ObservationType *L5;
        static ObservationType *L5A;
        static ObservationType *L5B;
        static ObservationType *L5C;
        static ObservationType *L5D;
        static ObservationType *L5I;
        static ObservationType *L5P;
        static ObservationType *L5Q;
        static ObservationType *L5X;
        static ObservationType *L5Z;
        static ObservationType *L6;
        static ObservationType *L6A;
        static ObservationType *L6B;
        static ObservationType *L6C;
        static ObservationType *L6D;
        static ObservationType *L6E;
        static ObservationType *L6I;
        static ObservationType *L6L;
        static ObservationType *L6P;
        static ObservationType *L6Q;
        static ObservationType *L6S;
        static ObservationType *L6X;
        static ObservationType *L6Z;
        static ObservationType *L7;
        static ObservationType *L7D;
        static ObservationType *L7I;
        static ObservationType *L7P;
        static ObservationType *L7Q;
        static ObservationType *L7X;
        static ObservationType *L7Z;
        static ObservationType *L8;
        static ObservationType *L8D;
        static ObservationType *L8I;
        static ObservationType *L8P;
        static ObservationType *L8Q;
        static ObservationType *L8X;
        static ObservationType *L9A;
        static ObservationType *L9B;
        static ObservationType *L9C;
        static ObservationType *L9X;
        static ObservationType *LA;
        static ObservationType *LB;
        static ObservationType *LC;
        static ObservationType *LD;
        static ObservationType *P1;
        static ObservationType *P2;
        static ObservationType *S0;
        static ObservationType *S1;
        static ObservationType *S1A;
        static ObservationType *S1B;
        static ObservationType *S1C;
        static ObservationType *S1D;
        static ObservationType *S1E;
        static ObservationType *S1I;
        static ObservationType *S1L;
        static ObservationType *S1M;
        static ObservationType *S1N;
        static ObservationType *S1P;
        static ObservationType *S1S;
        static ObservationType *S1W;
        static ObservationType *S1X;
        static ObservationType *S1Y;
        static ObservationType *S1Z;
        static ObservationType *S2;
        static ObservationType *S2C;
        static ObservationType *S2D;
        static ObservationType *S2I;
        static ObservationType *S2L;
        static ObservationType *S2M;
        static ObservationType *S2N;
        static ObservationType *S2P;
        static ObservationType *S2Q;
        static ObservationType *S2S;
        static ObservationType *S2W;
        static ObservationType *S2X;
        static ObservationType *S2Y;
        static ObservationType *S3I;
        static ObservationType *S3Q;
        static ObservationType *S3X;
        static ObservationType *S4A;
        static ObservationType *S4B;
        static ObservationType *S4X;
        static ObservationType *S5;
        static ObservationType *S5A;
        static ObservationType *S5B;
        static ObservationType *S5C;
        static ObservationType *S5D;
        static ObservationType *S5I;
        static ObservationType *S5P;
        static ObservationType *S5Q;
        static ObservationType *S5X;
        static ObservationType *S5Z;
        static ObservationType *S6;
        static ObservationType *S6A;
        static ObservationType *S6B;
        static ObservationType *S6C;
        static ObservationType *S6D;
        static ObservationType *S6E;
        static ObservationType *S6I;
        static ObservationType *S6L;
        static ObservationType *S6P;
        static ObservationType *S6Q;
        static ObservationType *S6S;
        static ObservationType *S6X;
        static ObservationType *S6Z;
        static ObservationType *S7;
        static ObservationType *S7D;
        static ObservationType *S7I;
        static ObservationType *S7P;
        static ObservationType *S7Q;
        static ObservationType *S7X;
        static ObservationType *S7Z;
        static ObservationType *S8;
        static ObservationType *S8D;
        static ObservationType *S8I;
        static ObservationType *S8P;
        static ObservationType *S8Q;
        static ObservationType *S8X;
        static ObservationType *S9A;
        static ObservationType *S9B;
        static ObservationType *S9C;
        static ObservationType *S9X;
        static ObservationType *SA;
        static ObservationType *SB;
        static ObservationType *SC;
        static ObservationType *SD;

        ::org::orekit::gnss::Frequency getFrequency(const ::org::orekit::gnss::SatelliteSystem &) const;
        ::org::orekit::gnss::MeasurementType getMeasurementType() const;
        ::org::orekit::gnss::SignalCode getSignalCode() const;
        static ObservationType valueOf(const ::java::lang::String &);
        static JArray< ObservationType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(ObservationType);
      extern PyTypeObject *PY_TYPE(ObservationType);

      class t_ObservationType {
      public:
        PyObject_HEAD
        ObservationType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ObservationType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ObservationType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ObservationType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
