#ifndef org_orekit_bodies_LoxodromeArc_H
#define org_orekit_bodies_LoxodromeArc_H

#include "org/orekit/bodies/Loxodrome.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class GeodeticPoint;
      class OneAxisEllipsoid;
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
    namespace bodies {

      class LoxodromeArc : public ::org::orekit::bodies::Loxodrome {
       public:
        enum {
          mid_init$_ea24656e424c71b9,
          mid_init$_34b55d8fdce3d642,
          mid_calculatePointAlongArc_11599325d56b0055,
          mid_getDistance_b74f83833fdad017,
          mid_getFinalPoint_963915d358b1e63a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LoxodromeArc(jobject obj) : ::org::orekit::bodies::Loxodrome(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LoxodromeArc(const LoxodromeArc& obj) : ::org::orekit::bodies::Loxodrome(obj) {}

        LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &);
        LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble);

        ::org::orekit::bodies::GeodeticPoint calculatePointAlongArc(jdouble) const;
        jdouble getDistance() const;
        ::org::orekit::bodies::GeodeticPoint getFinalPoint() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(LoxodromeArc);
      extern PyTypeObject *PY_TYPE(LoxodromeArc);

      class t_LoxodromeArc {
      public:
        PyObject_HEAD
        LoxodromeArc object;
        static PyObject *wrap_Object(const LoxodromeArc&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
