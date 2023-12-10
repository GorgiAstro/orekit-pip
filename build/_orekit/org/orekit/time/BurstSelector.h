#ifndef org_orekit_time_BurstSelector_H
#define org_orekit_time_BurstSelector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class TimeScale;
      class DatesSelector;
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace time {

      class BurstSelector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ce819118bc1e95e2,
          mid_selectDates_b7149ea6787a6f3c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BurstSelector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BurstSelector(const BurstSelector& obj) : ::java::lang::Object(obj) {}

        BurstSelector(jint, jdouble, jdouble, const ::org::orekit::time::TimeScale &);

        ::java::util::List selectDates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(BurstSelector);
      extern PyTypeObject *PY_TYPE(BurstSelector);

      class t_BurstSelector {
      public:
        PyObject_HEAD
        BurstSelector object;
        static PyObject *wrap_Object(const BurstSelector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
