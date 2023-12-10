#ifndef org_hipparchus_linear_RealVector_H
#define org_hipparchus_linear_RealVector_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealVector$Entry;
      class RealMatrix;
      class RealVectorPreservingVisitor;
      class RealVectorChangingVisitor;
    }
    namespace analysis {
      class UnivariateFunction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_add_a3e626dfa1abd779,
          mid_addToEntry_987a5fb872043b12,
          mid_append_a3e626dfa1abd779,
          mid_append_247afd2de476d613,
          mid_combine_a21461945eef1286,
          mid_combineToSelf_a21461945eef1286,
          mid_copy_6d9adf1d5b463928,
          mid_cosine_5ed80776077f2bda,
          mid_dotProduct_5ed80776077f2bda,
          mid_ebeDivide_a3e626dfa1abd779,
          mid_ebeMultiply_a3e626dfa1abd779,
          mid_equals_229c87223f486349,
          mid_getDimension_f2f64475e4580546,
          mid_getDistance_5ed80776077f2bda,
          mid_getEntry_b772323fc98b7293,
          mid_getL1Distance_5ed80776077f2bda,
          mid_getL1Norm_456d9a2f64d6b28d,
          mid_getLInfDistance_5ed80776077f2bda,
          mid_getLInfNorm_456d9a2f64d6b28d,
          mid_getMaxIndex_f2f64475e4580546,
          mid_getMaxValue_456d9a2f64d6b28d,
          mid_getMinIndex_f2f64475e4580546,
          mid_getMinValue_456d9a2f64d6b28d,
          mid_getNorm_456d9a2f64d6b28d,
          mid_getSubVector_898f26b9327f192e,
          mid_hashCode_f2f64475e4580546,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_iterator_035c6167e6569aac,
          mid_map_0bab37206846c144,
          mid_mapAdd_247afd2de476d613,
          mid_mapAddToSelf_247afd2de476d613,
          mid_mapDivide_247afd2de476d613,
          mid_mapDivideToSelf_247afd2de476d613,
          mid_mapMultiply_247afd2de476d613,
          mid_mapMultiplyToSelf_247afd2de476d613,
          mid_mapSubtract_247afd2de476d613,
          mid_mapSubtractToSelf_247afd2de476d613,
          mid_mapToSelf_0bab37206846c144,
          mid_outerProduct_d91077830a593cbe,
          mid_projection_a3e626dfa1abd779,
          mid_set_77e0f9a1f260e2e5,
          mid_setEntry_987a5fb872043b12,
          mid_setSubVector_dcd0f7fda5e9451c,
          mid_sparseIterator_035c6167e6569aac,
          mid_subtract_a3e626dfa1abd779,
          mid_toArray_7cdc325af0834901,
          mid_unitVector_6d9adf1d5b463928,
          mid_unitize_7ae3461a92a43152,
          mid_unmodifiableRealVector_a3e626dfa1abd779,
          mid_walkInDefaultOrder_f936e3f5b1c1be24,
          mid_walkInDefaultOrder_87c5a5041dad7333,
          mid_walkInDefaultOrder_295a71e39a8e7bf3,
          mid_walkInDefaultOrder_5e84f8a04ec8e2fa,
          mid_walkInOptimizedOrder_f936e3f5b1c1be24,
          mid_walkInOptimizedOrder_87c5a5041dad7333,
          mid_walkInOptimizedOrder_295a71e39a8e7bf3,
          mid_walkInOptimizedOrder_5e84f8a04ec8e2fa,
          mid_checkVectorDimensions_0a2a1ac2721c0336,
          mid_checkVectorDimensions_df4ee11a06094b55,
          mid_checkIndices_8dbc1129a3c2557a,
          mid_checkIndex_0a2a1ac2721c0336,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVector(const RealVector& obj) : ::java::lang::Object(obj) {}

        RealVector();

        RealVector add(const RealVector &) const;
        void addToEntry(jint, jdouble) const;
        RealVector append(const RealVector &) const;
        RealVector append(jdouble) const;
        RealVector combine(jdouble, jdouble, const RealVector &) const;
        RealVector combineToSelf(jdouble, jdouble, const RealVector &) const;
        RealVector copy() const;
        jdouble cosine(const RealVector &) const;
        jdouble dotProduct(const RealVector &) const;
        RealVector ebeDivide(const RealVector &) const;
        RealVector ebeMultiply(const RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getDimension() const;
        jdouble getDistance(const RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const RealVector &) const;
        jdouble getLInfNorm() const;
        jint getMaxIndex() const;
        jdouble getMaxValue() const;
        jint getMinIndex() const;
        jdouble getMinValue() const;
        jdouble getNorm() const;
        RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ::java::util::Iterator iterator() const;
        RealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        RealVector mapAdd(jdouble) const;
        RealVector mapAddToSelf(jdouble) const;
        RealVector mapDivide(jdouble) const;
        RealVector mapDivideToSelf(jdouble) const;
        RealVector mapMultiply(jdouble) const;
        RealVector mapMultiplyToSelf(jdouble) const;
        RealVector mapSubtract(jdouble) const;
        RealVector mapSubtractToSelf(jdouble) const;
        RealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const RealVector &) const;
        RealVector projection(const RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const RealVector &) const;
        ::java::util::Iterator sparseIterator() const;
        RealVector subtract(const RealVector &) const;
        JArray< jdouble > toArray() const;
        RealVector unitVector() const;
        void unitize() const;
        static RealVector unmodifiableRealVector(const RealVector &);
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVector);
      extern PyTypeObject *PY_TYPE(RealVector);

      class t_RealVector {
      public:
        PyObject_HEAD
        RealVector object;
        static PyObject *wrap_Object(const RealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
