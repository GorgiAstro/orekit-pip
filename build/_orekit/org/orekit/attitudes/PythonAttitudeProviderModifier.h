#ifndef org_orekit_attitudes_PythonAttitudeProviderModifier_H
#define org_orekit_attitudes_PythonAttitudeProviderModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class AttitudeProviderModifier;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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

      class PythonAttitudeProviderModifier : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
