#ifndef org_orekit_frames_PoleCorrection_H
#define org_orekit_frames_PoleCorrection_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class PoleCorrection;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PoleCorrection : public ::java::lang::Object {
       public:
        enum {
          mid_init$_369b4c97255d5afa,
          mid_getXp_b74f83833fdad017,
          mid_getYp_b74f83833fdad017,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PoleCorrection(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PoleCorrection(const PoleCorrection& obj) : ::java::lang::Object(obj) {}

        static PoleCorrection *NULL_CORRECTION;

        PoleCorrection(jdouble, jdouble);

        jdouble getXp() const;
        jdouble getYp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PoleCorrection);
      extern PyTypeObject *PY_TYPE(PoleCorrection);

      class t_PoleCorrection {
      public:
        PyObject_HEAD
        PoleCorrection object;
        static PyObject *wrap_Object(const PoleCorrection&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
