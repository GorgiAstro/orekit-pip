#ifndef org_orekit_data_DataProvidersManager_H
#define org_orekit_data_DataProvidersManager_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class FiltersManager;
      class DataLoader;
      class DataProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace data {

      class DataProvidersManager : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_addDefaultProviders_0fa09c18fee449d5,
          mid_addProvider_0467e68987811603,
          mid_clearLoadedDataNames_0fa09c18fee449d5,
          mid_clearProviders_0fa09c18fee449d5,
          mid_feed_b70d11da020d8106,
          mid_getFiltersManager_8751d88cff64f6b0,
          mid_getLoadedDataNames_015730311a5bacdc,
          mid_getProviders_2afa36052df4765d,
          mid_isSupported_b27cfcb990b8e37c,
          mid_removeProvider_d29423315e8237e2,
          mid_resetFiltersToDefault_0fa09c18fee449d5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit DataProvidersManager(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        DataProvidersManager(const DataProvidersManager& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *OREKIT_DATA_PATH;

        DataProvidersManager();

        void addDefaultProviders() const;
        void addProvider(const ::org::orekit::data::DataProvider &) const;
        void clearLoadedDataNames() const;
        void clearProviders() const;
        jboolean feed(const ::java::lang::String &, const ::org::orekit::data::DataLoader &) const;
        ::org::orekit::data::FiltersManager getFiltersManager() const;
        ::java::util::Set getLoadedDataNames() const;
        ::java::util::List getProviders() const;
        jboolean isSupported(const ::org::orekit::data::DataProvider &) const;
        ::org::orekit::data::DataProvider removeProvider(const ::org::orekit::data::DataProvider &) const;
        void resetFiltersToDefault() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace data {
      extern PyType_Def PY_TYPE_DEF(DataProvidersManager);
      extern PyTypeObject *PY_TYPE(DataProvidersManager);

      class t_DataProvidersManager {
      public:
        PyObject_HEAD
        DataProvidersManager object;
        static PyObject *wrap_Object(const DataProvidersManager&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
