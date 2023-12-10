#ifndef org_orekit_orbits_PositionAngleBased_H
#define org_orekit_orbits_PositionAngleBased_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class PositionAngleBased;
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
          mid_getCachedPositionAngleType_2571e8fe1cede425,
          mid_hasRates_e470b6d9e0d979db,
          mid_removeRates_5d36e7b611eab891,
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
