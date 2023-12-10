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
          mid_estimationTypeChanged_c5eea8698b6de721,
          mid_maxValueChanged_fc2ef790ea55778e,
          mid_minValueChanged_fc2ef790ea55778e,
          mid_nameChanged_e4f8d49c7ba0a1ff,
          mid_referenceDateChanged_a6424e7ebf34e1db,
          mid_referenceValueChanged_fc2ef790ea55778e,
          mid_scaleChanged_fc2ef790ea55778e,
          mid_selectionChanged_c5eea8698b6de721,
          mid_valueChanged_add632ecd3f14e19,
          mid_valueSpanMapChanged_8e4add4a2fbb55d9,
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
