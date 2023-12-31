#ifndef org_orekit_orbits_FieldKeplerianAnomalyUtility_H
#define org_orekit_orbits_FieldKeplerianAnomalyUtility_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
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

      class FieldKeplerianAnomalyUtility : public ::java::lang::Object {
       public:
        enum {
          mid_ellipticEccentricToMean_c6408fdce2cc6c1a,
          mid_ellipticEccentricToTrue_c6408fdce2cc6c1a,
          mid_ellipticMeanToEccentric_c6408fdce2cc6c1a,
          mid_ellipticMeanToTrue_c6408fdce2cc6c1a,
          mid_ellipticTrueToEccentric_c6408fdce2cc6c1a,
          mid_ellipticTrueToMean_c6408fdce2cc6c1a,
          mid_hyperbolicEccentricToMean_c6408fdce2cc6c1a,
          mid_hyperbolicEccentricToTrue_c6408fdce2cc6c1a,
          mid_hyperbolicMeanToEccentric_c6408fdce2cc6c1a,
          mid_hyperbolicMeanToTrue_c6408fdce2cc6c1a,
          mid_hyperbolicTrueToEccentric_c6408fdce2cc6c1a,
          mid_hyperbolicTrueToMean_c6408fdce2cc6c1a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldKeplerianAnomalyUtility(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldKeplerianAnomalyUtility(const FieldKeplerianAnomalyUtility& obj) : ::java::lang::Object(obj) {}

        static ::org::hipparchus::CalculusFieldElement ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::CalculusFieldElement hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(FieldKeplerianAnomalyUtility);
      extern PyTypeObject *PY_TYPE(FieldKeplerianAnomalyUtility);

      class t_FieldKeplerianAnomalyUtility {
      public:
        PyObject_HEAD
        FieldKeplerianAnomalyUtility object;
        static PyObject *wrap_Object(const FieldKeplerianAnomalyUtility&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
