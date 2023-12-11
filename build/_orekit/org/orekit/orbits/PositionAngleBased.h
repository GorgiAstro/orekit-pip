#ifndef org_orekit_orbits_PositionAngleBased_H
#define org_orekit_orbits_PositionAngleBased_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleBased;
      class PositionAngleType;
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
    namespace orbits {

      class PositionAngleBased : public ::java::lang::Object {
       public:
        enum {
          mid_getCachedPositionAngleType_f4984aee71df4c19,
          mid_hasRates_89b302893bdbe1f1,
          mid_removeRates_670bb8d961de5e47,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PositionAngleBased(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PositionAngleBased(const PositionAngleBased& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::orbits::PositionAngleType getCachedPositionAngleType() const;
        jboolean hasRates() const;
        PositionAngleBased removeRates() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(PositionAngleBased);
      extern PyTypeObject *PY_TYPE(PositionAngleBased);

      class t_PositionAngleBased {
      public:
        PyObject_HEAD
        PositionAngleBased object;
        static PyObject *wrap_Object(const PositionAngleBased&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
