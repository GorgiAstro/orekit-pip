#ifndef org_hipparchus_linear_RealVector_H
#define org_hipparchus_linear_RealVector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace linear {
      class RealVectorChangingVisitor;
      class RealVector$Entry;
      class RealMatrix;
      class RealVector;
      class RealVectorPreservingVisitor;
    }
    namespace analysis {
      class UnivariateFunction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_add_342d5b01463e0dc5,
          mid_addToEntry_89aad365fb0ed8da,
          mid_append_342d5b01463e0dc5,
          mid_append_6041102868c92dbb,
          mid_combine_28c30ed7b7c18204,
          mid_combineToSelf_28c30ed7b7c18204,
          mid_copy_75d50d73180655b4,
          mid_cosine_4062041acf71098b,
          mid_dotProduct_4062041acf71098b,
          mid_ebeDivide_342d5b01463e0dc5,
          mid_ebeMultiply_342d5b01463e0dc5,
          mid_equals_221e8e85cb385209,
          mid_getDimension_412668abc8d889e9,
          mid_getDistance_4062041acf71098b,
          mid_getEntry_69cfb132c661aca4,
          mid_getL1Distance_4062041acf71098b,
          mid_getL1Norm_557b8123390d8d0c,
          mid_getLInfDistance_4062041acf71098b,
          mid_getLInfNorm_557b8123390d8d0c,
          mid_getMaxIndex_412668abc8d889e9,
          mid_getMaxValue_557b8123390d8d0c,
          mid_getMinIndex_412668abc8d889e9,
          mid_getMinValue_557b8123390d8d0c,
          mid_getNorm_557b8123390d8d0c,
          mid_getSubVector_7d0bb0711f91d9f7,
          mid_hashCode_412668abc8d889e9,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_iterator_834a3801c426326d,
          mid_map_946b867097db175f,
          mid_mapAdd_6041102868c92dbb,
          mid_mapAddToSelf_6041102868c92dbb,
          mid_mapDivide_6041102868c92dbb,
          mid_mapDivideToSelf_6041102868c92dbb,
          mid_mapMultiply_6041102868c92dbb,
          mid_mapMultiplyToSelf_6041102868c92dbb,
          mid_mapSubtract_6041102868c92dbb,
          mid_mapSubtractToSelf_6041102868c92dbb,
          mid_mapToSelf_946b867097db175f,
          mid_outerProduct_62980eaee0411593,
          mid_projection_342d5b01463e0dc5,
          mid_set_10f281d777284cea,
          mid_setEntry_89aad365fb0ed8da,
          mid_setSubVector_a967cf1fffd0038f,
          mid_sparseIterator_834a3801c426326d,
          mid_subtract_342d5b01463e0dc5,
          mid_toArray_a53a7513ecedada2,
          mid_unitVector_75d50d73180655b4,
          mid_unitize_0640e6acf969ed28,
          mid_unmodifiableRealVector_342d5b01463e0dc5,
          mid_walkInDefaultOrder_06815b04d05d6656,
          mid_walkInDefaultOrder_5142e2b49b502547,
          mid_walkInDefaultOrder_5eb221680d1ddecd,
          mid_walkInDefaultOrder_a3edcb203ea44030,
          mid_walkInOptimizedOrder_06815b04d05d6656,
          mid_walkInOptimizedOrder_5142e2b49b502547,
          mid_walkInOptimizedOrder_5eb221680d1ddecd,
          mid_walkInOptimizedOrder_a3edcb203ea44030,
          mid_checkIndices_a84c9a223722150c,
          mid_checkVectorDimensions_87d15d6564ad754f,
          mid_checkVectorDimensions_a3da1a935cb37f7b,
          mid_checkIndex_a3da1a935cb37f7b,
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
