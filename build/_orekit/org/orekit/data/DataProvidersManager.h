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
      class DataProvider;
      class DataLoader;
      class FiltersManager;
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
          mid_init$_0640e6acf969ed28,
          mid_addDefaultProviders_0640e6acf969ed28,
          mid_addProvider_eed5c1a33a403243,
          mid_clearLoadedDataNames_0640e6acf969ed28,
          mid_clearProviders_0640e6acf969ed28,
          mid_feed_3a34776974e98f4e,
          mid_getFiltersManager_1fad27d36895899e,
          mid_getLoadedDataNames_2dfcbd371d62f4e1,
          mid_getProviders_0d9551367f7ecdef,
          mid_isSupported_39133ce80a3ed9c9,
          mid_removeProvider_4e919fd3ab7edaa7,
          mid_resetFiltersToDefault_0640e6acf969ed28,
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
