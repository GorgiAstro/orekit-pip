#ifndef org_orekit_time_DatesSelector_H
#define org_orekit_time_DatesSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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

      class DatesSelector : public ::java::lang::Object {
       public:
        enum {
          mid_selectDates_c5683b8e06424542,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DatesSelector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DatesSelector(const DatesSelector& obj) : ::java::lang::Object(obj) {}

        ::java::util::List selectDates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace time {
      extern PyType_Def PY_TYPE_DEF(DatesSelector);
      extern PyTypeObject *PY_TYPE(DatesSelector);

      class t_DatesSelector {
      public:
        PyObject_HEAD
        DatesSelector object;
        static PyObject *wrap_Object(const DatesSelector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
