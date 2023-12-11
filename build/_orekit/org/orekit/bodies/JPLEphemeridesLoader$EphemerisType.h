#ifndef org_orekit_bodies_JPLEphemeridesLoader$EphemerisType_H
#define org_orekit_bodies_JPLEphemeridesLoader$EphemerisType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class JPLEphemeridesLoader$EphemerisType;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class JPLEphemeridesLoader$EphemerisType : public ::java::lang::Enum {
       public:
        enum {
          mid_valueOf_abdae26a1ce2029f,
          mid_values_fc935065f80840c7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit JPLEphemeridesLoader$EphemerisType(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        JPLEphemeridesLoader$EphemerisType(const JPLEphemeridesLoader$EphemerisType& obj) : ::java::lang::Enum(obj) {}

        static JPLEphemeridesLoader$EphemerisType *EARTH;
        static JPLEphemeridesLoader$EphemerisType *EARTH_MOON;
        static JPLEphemeridesLoader$EphemerisType *JUPITER;
        static JPLEphemeridesLoader$EphemerisType *MARS;
        static JPLEphemeridesLoader$EphemerisType *MERCURY;
        static JPLEphemeridesLoader$EphemerisType *MOON;
        static JPLEphemeridesLoader$EphemerisType *NEPTUNE;
        static JPLEphemeridesLoader$EphemerisType *PLUTO;
        static JPLEphemeridesLoader$EphemerisType *SATURN;
        static JPLEphemeridesLoader$EphemerisType *SOLAR_SYSTEM_BARYCENTER;
        static JPLEphemeridesLoader$EphemerisType *SUN;
        static JPLEphemeridesLoader$EphemerisType *URANUS;
        static JPLEphemeridesLoader$EphemerisType *VENUS;

        static JPLEphemeridesLoader$EphemerisType valueOf(const ::java::lang::String &);
        static JArray< JPLEphemeridesLoader$EphemerisType > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType);
      extern PyTypeObject *PY_TYPE(JPLEphemeridesLoader$EphemerisType);

      class t_JPLEphemeridesLoader$EphemerisType {
      public:
        PyObject_HEAD
        JPLEphemeridesLoader$EphemerisType object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_JPLEphemeridesLoader$EphemerisType *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const JPLEphemeridesLoader$EphemerisType&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const JPLEphemeridesLoader$EphemerisType&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
