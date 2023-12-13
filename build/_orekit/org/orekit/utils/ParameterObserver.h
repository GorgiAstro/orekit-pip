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
          mid_estimationTypeChanged_caa43046eb7c4bed,
          mid_maxValueChanged_babb3527161a946b,
          mid_minValueChanged_babb3527161a946b,
          mid_nameChanged_44e2be0923cad9dd,
          mid_referenceDateChanged_4d2c7fa440f612ec,
          mid_referenceValueChanged_babb3527161a946b,
          mid_scaleChanged_babb3527161a946b,
          mid_selectionChanged_caa43046eb7c4bed,
          mid_valueChanged_1213852ac6f6619d,
          mid_valueSpanMapChanged_a1a4c13d6e36518d,
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
