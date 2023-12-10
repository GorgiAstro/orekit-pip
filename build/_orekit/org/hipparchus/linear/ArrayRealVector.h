#ifndef org_hipparchus_linear_ArrayRealVector_H
#define org_hipparchus_linear_ArrayRealVector_H

#include "org/hipparchus/linear/RealVector.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
      class RealVectorPreservingVisitor;
      class RealVectorChangingVisitor;
      class ArrayRealVector;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Double;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class ArrayRealVector : public ::org::hipparchus::linear::RealVector {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_ebc26dcaf4761286,
          mid_init$_6d211d0550baef5d,
          mid_init$_df4ee11a06094b55,
          mid_init$_0a2a1ac2721c0336,
          mid_init$_8f7323824264d7e5,
          mid_init$_e16ea2cf9e8a7313,
          mid_init$_1e0e996ac840b5c7,
          mid_init$_a007ff78575b9ade,
          mid_init$_d9abe82675adaecf,
          mid_init$_0d03c8a1d7f56f02,
          mid_init$_febce76b2e172ee8,
          mid_init$_d26930f65a8ba6c9,
          mid_init$_987a5fb872043b12,
          mid_init$_d3508f432c1d798d,
          mid_init$_8ff13165a6ccde38,
          mid_add_814fde753e05ba41,
          mid_addToEntry_987a5fb872043b12,
          mid_append_cf7752188b9ef155,
          mid_append_a3e626dfa1abd779,
          mid_append_247afd2de476d613,
          mid_combine_5792aa5323251556,
          mid_combineToSelf_5792aa5323251556,
          mid_copy_012d035251715193,
          mid_dotProduct_5ed80776077f2bda,
          mid_ebeDivide_814fde753e05ba41,
          mid_ebeMultiply_814fde753e05ba41,
          mid_equals_229c87223f486349,
          mid_getDataRef_7cdc325af0834901,
          mid_getDimension_f2f64475e4580546,
          mid_getDistance_5ed80776077f2bda,
          mid_getEntry_b772323fc98b7293,
          mid_getL1Distance_5ed80776077f2bda,
          mid_getL1Norm_456d9a2f64d6b28d,
          mid_getLInfDistance_5ed80776077f2bda,
          mid_getLInfNorm_456d9a2f64d6b28d,
          mid_getNorm_456d9a2f64d6b28d,
          mid_getSubVector_898f26b9327f192e,
          mid_hashCode_f2f64475e4580546,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_map_a6fda0c2218c2046,
          mid_mapAddToSelf_247afd2de476d613,
          mid_mapDivideToSelf_247afd2de476d613,
          mid_mapMultiplyToSelf_247afd2de476d613,
          mid_mapSubtractToSelf_247afd2de476d613,
          mid_mapToSelf_a6fda0c2218c2046,
          mid_outerProduct_d91077830a593cbe,
          mid_set_77e0f9a1f260e2e5,
          mid_setEntry_987a5fb872043b12,
          mid_setSubVector_7d4f41c65056f174,
          mid_setSubVector_dcd0f7fda5e9451c,
          mid_subtract_814fde753e05ba41,
          mid_toArray_7cdc325af0834901,
          mid_toString_0090f7797e403f43,
          mid_walkInDefaultOrder_f936e3f5b1c1be24,
          mid_walkInDefaultOrder_87c5a5041dad7333,
          mid_walkInDefaultOrder_295a71e39a8e7bf3,
          mid_walkInDefaultOrder_5e84f8a04ec8e2fa,
          mid_walkInOptimizedOrder_f936e3f5b1c1be24,
          mid_walkInOptimizedOrder_87c5a5041dad7333,
          mid_walkInOptimizedOrder_295a71e39a8e7bf3,
          mid_walkInOptimizedOrder_5e84f8a04ec8e2fa,
          mid_checkVectorDimensions_df4ee11a06094b55,
          mid_checkVectorDimensions_0a2a1ac2721c0336,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ArrayRealVector(jobject obj) : ::org::hipparchus::linear::RealVector(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ArrayRealVector(const ArrayRealVector& obj) : ::org::hipparchus::linear::RealVector(obj) {}

        ArrayRealVector();
        ArrayRealVector(const JArray< jdouble > &);
        ArrayRealVector(const JArray< ::java::lang::Double > &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(jint);
        ArrayRealVector(const ArrayRealVector &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const JArray< jdouble > &);
        ArrayRealVector(const JArray< jdouble > &, const ArrayRealVector &);
        ArrayRealVector(const ArrayRealVector &, const ::org::hipparchus::linear::RealVector &);
        ArrayRealVector(const ::org::hipparchus::linear::RealVector &, const ArrayRealVector &);
        ArrayRealVector(const JArray< jdouble > &, const JArray< jdouble > &);
        ArrayRealVector(const ArrayRealVector &, jboolean);
        ArrayRealVector(const JArray< jdouble > &, jboolean);
        ArrayRealVector(jint, jdouble);
        ArrayRealVector(const JArray< jdouble > &, jint, jint);
        ArrayRealVector(const JArray< ::java::lang::Double > &, jint, jint);

        ArrayRealVector add(const ::org::hipparchus::linear::RealVector &) const;
        void addToEntry(jint, jdouble) const;
        ArrayRealVector append(const ArrayRealVector &) const;
        ::org::hipparchus::linear::RealVector append(const ::org::hipparchus::linear::RealVector &) const;
        ::org::hipparchus::linear::RealVector append(jdouble) const;
        ArrayRealVector combine(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector combineToSelf(jdouble, jdouble, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector copy() const;
        jdouble dotProduct(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeDivide(const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector ebeMultiply(const ::org::hipparchus::linear::RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        JArray< jdouble > getDataRef() const;
        jint getDimension() const;
        jdouble getDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const ::org::hipparchus::linear::RealVector &) const;
        jdouble getLInfNorm() const;
        jdouble getNorm() const;
        ::org::hipparchus::linear::RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ArrayRealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealVector mapAddToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapDivideToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapMultiplyToSelf(jdouble) const;
        ::org::hipparchus::linear::RealVector mapSubtractToSelf(jdouble) const;
        ArrayRealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const ::org::hipparchus::linear::RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const JArray< jdouble > &) const;
        void setSubVector(jint, const ::org::hipparchus::linear::RealVector &) const;
        ArrayRealVector subtract(const ::org::hipparchus::linear::RealVector &) const;
        JArray< jdouble > toArray() const;
        ::java::lang::String toString() const;
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
      extern PyType_Def PY_TYPE_DEF(ArrayRealVector);
      extern PyTypeObject *PY_TYPE(ArrayRealVector);

      class t_ArrayRealVector {
      public:
        PyObject_HEAD
        ArrayRealVector object;
        static PyObject *wrap_Object(const ArrayRealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
