#ifndef org_orekit_frames_AbstractEopParser_H
#define org_orekit_frames_AbstractEopParser_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EopHistoryLoader$Parser;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class AbstractEopParser : public ::java::lang::Object {
       public:
        enum {
          mid_getConverter_4c6face5636e3d4a,
          mid_getUtc_63ac10047983bd43,
          mid_getItrfVersionProvider_b740eba42ec8c01f,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractEopParser(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractEopParser(const AbstractEopParser& obj) : ::java::lang::Object(obj) {}
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(AbstractEopParser);
      extern PyTypeObject *PY_TYPE(AbstractEopParser);

      class t_AbstractEopParser {
      public:
        PyObject_HEAD
        AbstractEopParser object;
        static PyObject *wrap_Object(const AbstractEopParser&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
