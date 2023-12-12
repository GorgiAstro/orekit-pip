#ifndef org_orekit_bodies_CelestialBody_H
#define org_orekit_bodies_CelestialBody_H

#include "java/io/Serializable.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
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
    namespace bodies {

      class CelestialBody : public ::java::io::Serializable {
       public:
        enum {
          mid_getBodyOrientedFrame_6c9bc0a928c56d4e,
          mid_getGM_557b8123390d8d0c,
          mid_getInertiallyOrientedFrame_6c9bc0a928c56d4e,
          mid_getName_3cffd47377eca18a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CelestialBody(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CelestialBody(const CelestialBody& obj) : ::java::io::Serializable(obj) {}

        ::org::orekit::frames::Frame getBodyOrientedFrame() const;
        jdouble getGM() const;
        ::org::orekit::frames::Frame getInertiallyOrientedFrame() const;
        ::java::lang::String getName() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CelestialBody);
      extern PyTypeObject *PY_TYPE(CelestialBody);

      class t_CelestialBody {
      public:
        PyObject_HEAD
        CelestialBody object;
        static PyObject *wrap_Object(const CelestialBody&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
