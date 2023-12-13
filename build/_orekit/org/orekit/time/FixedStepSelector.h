#ifndef org_orekit_time_FixedStepSelector_H
#define org_orekit_time_FixedStepSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DatesSelector;
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class FixedStepSelector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6e3d05f890ae5dd6,
          mid_selectDates_50850a0bb1306a34,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FixedStepSelector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FixedStepSelector(const FixedStepSelector& obj) : ::java::lang::Object(obj) {}

        FixedStepSelector(jdouble, const ::org::orekit::time::TimeScale &);

        ::java::util::List selectDates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(FixedStepSelector);
      extern PyTypeObject *PY_TYPE(FixedStepSelector);

      class t_FixedStepSelector {
      public:
        PyObject_HEAD
        FixedStepSelector object;
        static PyObject *wrap_Object(const FixedStepSelector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
