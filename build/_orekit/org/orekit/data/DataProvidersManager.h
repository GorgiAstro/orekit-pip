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
      class DataProvider;
      class DataLoader;
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
          mid_init$_7ae3461a92a43152,
          mid_addDefaultProviders_7ae3461a92a43152,
          mid_addProvider_308c4bc60337625a,
          mid_clearLoadedDataNames_7ae3461a92a43152,
          mid_clearProviders_7ae3461a92a43152,
          mid_feed_bcc626f294fafcf6,
          mid_getFiltersManager_9bc87012852bc9c1,
          mid_getLoadedDataNames_e9e1a6780fe94297,
          mid_getProviders_a6156df500549a58,
          mid_isSupported_ab23dfcf677c048c,
          mid_removeProvider_29821a711ab49f7c,
          mid_resetFiltersToDefault_7ae3461a92a43152,
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
