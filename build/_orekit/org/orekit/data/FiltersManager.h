#ifndef org_orekit_data_FiltersManager_H
#define org_orekit_data_FiltersManager_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataFilter;
      class DataSource;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class FiltersManager : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_addFilter_d8e64c73c19d96b6,
          mid_applyRelevantFilters_d33f4b0b3a1030ad,
          mid_clearFilters_0640e6acf969ed28,
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
