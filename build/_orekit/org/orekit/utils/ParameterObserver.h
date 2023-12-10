#ifndef org_orekit_utils_ParameterObserver_H
#define org_orekit_utils_ParameterObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeSpanMap;
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Double;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterObserver : public ::java::lang::Object {
       public:
        enum {
          mid_estimationTypeChanged_aa2456410c9edfed,
          mid_maxValueChanged_8bad56a4adb01d6f,
          mid_minValueChanged_8bad56a4adb01d6f,
          mid_nameChanged_8306c9e30f20d9eb,
          mid_referenceDateChanged_9d84e904439808dd,
          mid_referenceValueChanged_8bad56a4adb01d6f,
          mid_scaleChanged_8bad56a4adb01d6f,
          mid_selectionChanged_aa2456410c9edfed,
          mid_valueChanged_25a9530287ebc441,
          mid_valueSpanMapChanged_dc11aff94465299a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterObserver(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterObserver(const ParameterObserver& obj) : ::java::lang::Object(obj) {}

        void estimationTypeChanged(jboolean, const ::org::orekit::utils::ParameterDriver &) const;
        void maxValueChanged(jdouble, const ::org::orekit::utils::ParameterDriver &) const;
        void minValueChanged(jdouble, const ::org::orekit::utils::ParameterDriver &) const;
        void nameChanged(const ::java::lang::String &, const ::org::orekit::utils::ParameterDriver &) const;
        void referenceDateChanged(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ParameterDriver &) const;
        void referenceValueChanged(jdouble, const ::org::orekit::utils::ParameterDriver &) const;
        void scaleChanged(jdouble, const ::org::orekit::utils::ParameterDriver &) const;
        void selectionChanged(jboolean, const ::org::orekit::utils::ParameterDriver &) const;
        void valueChanged(jdouble, const ::org::orekit::utils::ParameterDriver &, const ::org::orekit::time::AbsoluteDate &) const;
        void valueSpanMapChanged(const ::org::orekit::utils::TimeSpanMap &, const ::org::orekit::utils::ParameterDriver &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterObserver);
      extern PyTypeObject *PY_TYPE(ParameterObserver);

      class t_ParameterObserver {
      public:
        PyObject_HEAD
        ParameterObserver object;
        static PyObject *wrap_Object(const ParameterObserver&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
