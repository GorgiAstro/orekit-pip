#ifndef org_orekit_attitudes_PythonAttitudeBuilder_H
#define org_orekit_attitudes_PythonAttitudeBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeBuilder;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class TimeStampedFieldAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
    }
    namespace frames {
      class Frame;
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
          mid_init$_0640e6acf969ed28,
          mid_build_4329b81cdba13b7b,
          mid_build_76e687ee866bdc48,
          mid_finalize_0640e6acf969ed28,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
