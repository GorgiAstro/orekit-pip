#ifndef org_orekit_data_FiltersManager_H
#define org_orekit_data_FiltersManager_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataFilter;
      class DataSource;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FiltersManager : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_addFilter_2665e0a82c5f5a0d,
          mid_applyRelevantFilters_446488bfc679a21b,
          mid_clearFilters_7ae3461a92a43152,
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
