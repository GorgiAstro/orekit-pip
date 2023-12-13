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
      class DataLoader;
      class DataProvider;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_addDefaultProviders_a1fa5dae97ea5ed2,
          mid_addProvider_84a0646757ec5507,
          mid_clearLoadedDataNames_a1fa5dae97ea5ed2,
          mid_clearProviders_a1fa5dae97ea5ed2,
          mid_feed_ec883b81a8ab3cb3,
          mid_getFiltersManager_15c99bd7b29bc28d,
          mid_getLoadedDataNames_7e8f11dd23d1142c,
          mid_getProviders_e62d3bb06d56d7e3,
          mid_isSupported_3c68971827ec2e7c,
          mid_removeProvider_57f5f42ad329d7c6,
          mid_resetFiltersToDefault_a1fa5dae97ea5ed2,
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
