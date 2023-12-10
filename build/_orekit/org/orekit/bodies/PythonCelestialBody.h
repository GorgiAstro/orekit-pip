#ifndef org_orekit_bodies_PythonCelestialBody_H
#define org_orekit_bodies_PythonCelestialBody_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getBodyOrientedFrame_b86f9f61d97a7244,
          mid_getGM_dff5885c2c873297,
          mid_getInertiallyOrientedFrame_b86f9f61d97a7244,
          mid_getName_11b109bd155ca898,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_toFieldPVCoordinatesProvider_d72544f06817e18b,
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
