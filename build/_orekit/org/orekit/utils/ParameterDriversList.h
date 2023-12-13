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
      class ParameterDriversList$DelegatingDriver;
      class ParameterDriver;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_add_5791d10af4720a8e,
          mid_filter_fcb96c98de6fad04,
          mid_findByName_23e679f46eb9cdb6,
          mid_findDelegatingSpanNameBySpanName_6f0f3576df9f75ee,
          mid_getDrivers_e62d3bb06d56d7e3,
          mid_getNbParams_55546ef6a647f39b,
          mid_getNbValuesToEstimate_55546ef6a647f39b,
          mid_sort_a1fa5dae97ea5ed2,
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
