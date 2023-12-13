#ifndef org_orekit_bodies_PythonCelestialBody_H
#define org_orekit_bodies_PythonCelestialBody_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class FieldPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class CelestialBody;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getBodyOrientedFrame_2c51111cc6894ba1,
          mid_getGM_b74f83833fdad017,
          mid_getInertiallyOrientedFrame_2c51111cc6894ba1,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_getPVCoordinates_294c5c99690f2356,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_toFieldPVCoordinatesProvider_9516b47d48320472,
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
