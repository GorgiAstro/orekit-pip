#ifndef org_orekit_gnss_SatelliteSystem_H
#define org_orekit_gnss_SatelliteSystem_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
      class ObservationTimeScale;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
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

      class SatelliteSystem : public ::java::lang::Enum {
       public:
        enum {
          mid_getKey_7818f5b58320cd1f,
          mid_getObservationTimeScale_fa7257fa8a64a129,
          mid_parseSatelliteSystem_59a293910798a367,
          mid_parseSatelliteSystemWithGPSDefault_59a293910798a367,
          mid_valueOf_59a293910798a367,
          mid_values_335dac96c43b203c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SatelliteSystem(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SatelliteSystem(const SatelliteSystem& obj) : ::java::lang::Enum(obj) {}

        static SatelliteSystem *BEIDOU;
        static SatelliteSystem *GALILEO;
        static SatelliteSystem *GLONASS;
        static SatelliteSystem *GPS;
        static SatelliteSystem *IRNSS;
        static SatelliteSystem *MIXED;
        static SatelliteSystem *QZSS;
        static SatelliteSystem *SBAS;
        static SatelliteSystem *USER_DEFINED_A;
        static SatelliteSystem *USER_DEFINED_B;
        static SatelliteSystem *USER_DEFINED_D;
        static SatelliteSystem *USER_DEFINED_F;
        static SatelliteSystem *USER_DEFINED_H;
        static SatelliteSystem *USER_DEFINED_K;
        static SatelliteSystem *USER_DEFINED_L;
        static SatelliteSystem *USER_DEFINED_N;
        static SatelliteSystem *USER_DEFINED_O;
        static SatelliteSystem *USER_DEFINED_P;
        static SatelliteSystem *USER_DEFINED_Q;
        static SatelliteSystem *USER_DEFINED_T;
        static SatelliteSystem *USER_DEFINED_U;
        static SatelliteSystem *USER_DEFINED_V;
        static SatelliteSystem *USER_DEFINED_W;
        static SatelliteSystem *USER_DEFINED_X;
        static SatelliteSystem *USER_DEFINED_Y;
        static SatelliteSystem *USER_DEFINED_Z;

        jchar getKey() const;
        ::org::orekit::gnss::ObservationTimeScale getObservationTimeScale() const;
        static SatelliteSystem parseSatelliteSystem(const ::java::lang::String &);
        static SatelliteSystem parseSatelliteSystemWithGPSDefault(const ::java::lang::String &);
        static SatelliteSystem valueOf(const ::java::lang::String &);
        static JArray< SatelliteSystem > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      extern PyType_Def PY_TYPE_DEF(SatelliteSystem);
      extern PyTypeObject *PY_TYPE(SatelliteSystem);

      class t_SatelliteSystem {
      public:
        PyObject_HEAD
        SatelliteSystem object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_SatelliteSystem *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const SatelliteSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const SatelliteSystem&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
