#ifndef org_orekit_orbits_KeplerianAnomalyUtility_H
#define org_orekit_orbits_KeplerianAnomalyUtility_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class KeplerianAnomalyUtility : public ::java::lang::Object {
       public:
        enum {
          mid_ellipticEccentricToMean_86ffecc08a63eff0,
          mid_ellipticEccentricToTrue_86ffecc08a63eff0,
          mid_ellipticMeanToEccentric_86ffecc08a63eff0,
          mid_ellipticMeanToTrue_86ffecc08a63eff0,
          mid_ellipticTrueToEccentric_86ffecc08a63eff0,
          mid_ellipticTrueToMean_86ffecc08a63eff0,
          mid_hyperbolicEccentricToMean_86ffecc08a63eff0,
          mid_hyperbolicEccentricToTrue_86ffecc08a63eff0,
          mid_hyperbolicMeanToEccentric_86ffecc08a63eff0,
          mid_hyperbolicMeanToTrue_86ffecc08a63eff0,
          mid_hyperbolicTrueToEccentric_86ffecc08a63eff0,
          mid_hyperbolicTrueToMean_86ffecc08a63eff0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit KeplerianAnomalyUtility(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        KeplerianAnomalyUtility(const KeplerianAnomalyUtility& obj) : ::java::lang::Object(obj) {}

        static jdouble ellipticEccentricToMean(jdouble, jdouble);
        static jdouble ellipticEccentricToTrue(jdouble, jdouble);
        static jdouble ellipticMeanToEccentric(jdouble, jdouble);
        static jdouble ellipticMeanToTrue(jdouble, jdouble);
        static jdouble ellipticTrueToEccentric(jdouble, jdouble);
        static jdouble ellipticTrueToMean(jdouble, jdouble);
        static jdouble hyperbolicEccentricToMean(jdouble, jdouble);
        static jdouble hyperbolicEccentricToTrue(jdouble, jdouble);
        static jdouble hyperbolicMeanToEccentric(jdouble, jdouble);
        static jdouble hyperbolicMeanToTrue(jdouble, jdouble);
        static jdouble hyperbolicTrueToEccentric(jdouble, jdouble);
        static jdouble hyperbolicTrueToMean(jdouble, jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(KeplerianAnomalyUtility);
      extern PyTypeObject *PY_TYPE(KeplerianAnomalyUtility);

      class t_KeplerianAnomalyUtility {
      public:
        PyObject_HEAD
        KeplerianAnomalyUtility object;
        static PyObject *wrap_Object(const KeplerianAnomalyUtility&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
