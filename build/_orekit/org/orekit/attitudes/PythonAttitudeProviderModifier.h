#ifndef org_orekit_attitudes_PythonAttitudeProviderModifier_H
#define org_orekit_attitudes_PythonAttitudeProviderModifier_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace attitudes {
      class FieldAttitude;
      class AttitudeProvider;
      class Attitude;
      class AttitudeProviderModifier;
    }
    namespace frames {
      class Frame;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class PythonAttitudeProviderModifier : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getUnderlyingAttitudeProvider_6df6b78ab9377151,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAttitudeProviderModifier(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAttitudeProviderModifier(const PythonAttitudeProviderModifier& obj) : ::java::lang::Object(obj) {}

        PythonAttitudeProviderModifier();

        void finalize() const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::AttitudeProvider getUnderlyingAttitudeProvider() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonAttitudeProviderModifier);
      extern PyTypeObject *PY_TYPE(PythonAttitudeProviderModifier);

      class t_PythonAttitudeProviderModifier {
      public:
        PyObject_HEAD
        PythonAttitudeProviderModifier object;
        static PyObject *wrap_Object(const PythonAttitudeProviderModifier&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
