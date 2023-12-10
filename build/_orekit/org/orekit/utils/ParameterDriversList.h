#ifndef org_orekit_utils_ParameterDriversList_H
#define org_orekit_utils_ParameterDriversList_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
      class ParameterDriversList$DelegatingDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ParameterDriversList : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_add_01a5c4b8230d6f04,
          mid_filter_bd04c9335fb9e4cf,
          mid_findByName_01949d6c54d4d229,
          mid_findDelegatingSpanNameBySpanName_92807efd57acb082,
          mid_getDrivers_2afa36052df4765d,
          mid_getNbParams_570ce0828f81a2c1,
          mid_getNbValuesToEstimate_570ce0828f81a2c1,
          mid_sort_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ParameterDriversList(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ParameterDriversList(const ParameterDriversList& obj) : ::java::lang::Object(obj) {}

        ParameterDriversList();

        void add(const ::org::orekit::utils::ParameterDriver &) const;
        void filter(jboolean) const;
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver findByName(const ::java::lang::String &) const;
        ::java::lang::String findDelegatingSpanNameBySpanName(const ::java::lang::String &) const;
        ::java::util::List getDrivers() const;
        jint getNbParams() const;
        jint getNbValuesToEstimate() const;
        void sort() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ParameterDriversList);
      extern PyTypeObject *PY_TYPE(ParameterDriversList);

      class t_ParameterDriversList {
      public:
        PyObject_HEAD
        ParameterDriversList object;
        static PyObject *wrap_Object(const ParameterDriversList&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
