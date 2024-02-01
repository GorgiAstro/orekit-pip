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
          mid_init$_ff7cb6c242604316,
          mid_addDefaultProviders_ff7cb6c242604316,
          mid_addProvider_367cb163eeb24eae,
          mid_clearLoadedDataNames_ff7cb6c242604316,
          mid_clearProviders_ff7cb6c242604316,
          mid_feed_f6d803022cb39ea8,
          mid_getFiltersManager_558902389ce51bbb,
          mid_getLoadedDataNames_6b191a9b12c1004b,
          mid_getProviders_d751c1a57012b438,
          mid_isSupported_786e17c9e4f257d8,
          mid_removeProvider_a8e440e2a9a1fd7c,
          mid_resetFiltersToDefault_ff7cb6c242604316,
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
