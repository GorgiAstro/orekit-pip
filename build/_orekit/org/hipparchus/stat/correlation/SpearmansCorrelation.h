#ifndef org_hipparchus_stat_correlation_SpearmansCorrelation_H
#define org_hipparchus_stat_correlation_SpearmansCorrelation_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        class PearsonsCorrelation;
      }
      namespace ranking {
        class RankingAlgorithm;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
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
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        class SpearmansCorrelation : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_c67473bd6cfaa69b,
            mid_init$_3f343f3417b14a65,
            mid_init$_6d13e5c4d7288b49,
            mid_computeCorrelationMatrix_62c0bfb50b5dacc0,
            mid_computeCorrelationMatrix_e9b72403ad502221,
            mid_correlation_b561c6892e9976f8,
            mid_getCorrelationMatrix_688b496048ff947b,
            mid_getRankCorrelation_e3135829282064ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SpearmansCorrelation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SpearmansCorrelation(const SpearmansCorrelation& obj) : ::java::lang::Object(obj) {}

          SpearmansCorrelation();
          SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix &);
          SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm &);
          SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::stat::ranking::RankingAlgorithm &);

          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const JArray< JArray< jdouble > > &) const;
          ::org::hipparchus::linear::RealMatrix computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix &) const;
          jdouble correlation(const JArray< jdouble > &, const JArray< jdouble > &) const;
          ::org::hipparchus::linear::RealMatrix getCorrelationMatrix() const;
          ::org::hipparchus::stat::correlation::PearsonsCorrelation getRankCorrelation() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        extern PyType_Def PY_TYPE_DEF(SpearmansCorrelation);
        extern PyTypeObject *PY_TYPE(SpearmansCorrelation);

        class t_SpearmansCorrelation {
        public:
          PyObject_HEAD
          SpearmansCorrelation object;
          static PyObject *wrap_Object(const SpearmansCorrelation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
