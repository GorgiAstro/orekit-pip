#ifndef org_orekit_bodies_PythonCelestialBody_H
#define org_orekit_bodies_PythonCelestialBody_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getBodyOrientedFrame_cb151471db4570f0,
          mid_getGM_9981f74b2d109da6,
          mid_getInertiallyOrientedFrame_cb151471db4570f0,
          mid_getName_d2c8eb4129821f0e,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_toFieldPVCoordinatesProvider_36db2fb93843b2c3,
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
