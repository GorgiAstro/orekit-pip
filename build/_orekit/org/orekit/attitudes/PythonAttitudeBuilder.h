#ifndef org_orekit_attitudes_PythonAttitudeBuilder_H
#define org_orekit_attitudes_PythonAttitudeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class FieldAttitude;
      class AttitudeBuilder;
      class Attitude;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class PythonAttitudeBuilder : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_build_16f6708eb1cda684,
          mid_build_11d80d4c91effa8b,
          mid_finalize_ff7cb6c242604316,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAttitudeBuilder(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAttitudeBuilder(const PythonAttitudeBuilder& obj) : ::java::lang::Object(obj) {}

        PythonAttitudeBuilder();

        ::org::orekit::attitudes::FieldAttitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates &) const;
        ::org::orekit::attitudes::Attitude build(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
        void finalize() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(PythonAttitudeBuilder);
      extern PyTypeObject *PY_TYPE(PythonAttitudeBuilder);

      class t_PythonAttitudeBuilder {
      public:
        PyObject_HEAD
        PythonAttitudeBuilder object;
        static PyObject *wrap_Object(const PythonAttitudeBuilder&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
