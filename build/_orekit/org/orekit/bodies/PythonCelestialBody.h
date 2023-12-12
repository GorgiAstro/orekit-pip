#ifndef org_orekit_bodies_PythonCelestialBody_H
#define org_orekit_bodies_PythonCelestialBody_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    class Field;
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class PythonCelestialBody : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getBodyOrientedFrame_6c9bc0a928c56d4e,
          mid_getGM_557b8123390d8d0c,
          mid_getInertiallyOrientedFrame_6c9bc0a928c56d4e,
          mid_getName_3cffd47377eca18a,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPVCoordinates_4ac52e75113a03db,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_toFieldPVCoordinatesProvider_cdcdbddb8a8cc591,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonCelestialBody(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonCelestialBody(const PythonCelestialBody& obj) : ::java::lang::Object(obj) {}

        PythonCelestialBody();

        void finalize() const;
        ::org::orekit::frames::Frame getBodyOrientedFrame() const;
        jdouble getGM() const;
        ::org::orekit::frames::Frame getInertiallyOrientedFrame() const;
        ::java::lang::String getName() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        ::org::orekit::utils::FieldPVCoordinatesProvider toFieldPVCoordinatesProvider(const ::org::hipparchus::Field &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(PythonCelestialBody);
      extern PyTypeObject *PY_TYPE(PythonCelestialBody);

      class t_PythonCelestialBody {
      public:
        PyObject_HEAD
        PythonCelestialBody object;
        static PyObject *wrap_Object(const PythonCelestialBody&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
