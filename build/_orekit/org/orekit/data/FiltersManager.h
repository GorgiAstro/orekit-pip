#ifndef org_orekit_data_FiltersManager_H
#define org_orekit_data_FiltersManager_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataSource;
      class DataFilter;
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FiltersManager : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_addFilter_43cbd53f5e425ae3,
          mid_applyRelevantFilters_716adf7a6da8b4d7,
          mid_clearFilters_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FiltersManager(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FiltersManager(const FiltersManager& obj) : ::java::lang::Object(obj) {}

        FiltersManager();

        void addFilter(const ::org::orekit::data::DataFilter &) const;
        ::org::orekit::data::DataSource applyRelevantFilters(const ::org::orekit::data::DataSource &) const;
        void clearFilters() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(FiltersManager);
      extern PyTypeObject *PY_TYPE(FiltersManager);

      class t_FiltersManager {
      public:
        PyObject_HEAD
        FiltersManager object;
        static PyObject *wrap_Object(const FiltersManager&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
