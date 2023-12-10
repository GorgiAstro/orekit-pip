#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *PearsonsCorrelation::class$ = NULL;
        jmethodID *PearsonsCorrelation::mids$ = NULL;
        bool PearsonsCorrelation::live$ = false;

        jclass PearsonsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/PearsonsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_6c5e3ad3650bb2d2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/correlation/Covariance;)V");
            mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_108eaf33d77cb0c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;I)V");
            mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e9b72403ad502221] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b561c6892e9976f8] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_covarianceToCorrelation_e9b72403ad502221] = env->getMethodID(cls, "covarianceToCorrelation", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationMatrix_688b496048ff947b] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationPValues_688b496048ff947b] = env->getMethodID(cls, "getCorrelationPValues", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationStandardErrors_688b496048ff947b] = env->getMethodID(cls, "getCorrelationStandardErrors", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PearsonsCorrelation::PearsonsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        PearsonsCorrelation::PearsonsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c5e3ad3650bb2d2, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_108eaf33d77cb0c0, a0.this$, a1)) {}

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_62c0bfb50b5dacc0], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e9b72403ad502221], a0.this$));
        }

        jdouble PearsonsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b561c6892e9976f8], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_covarianceToCorrelation_e9b72403ad502221], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationPValues() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationPValues_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationStandardErrors() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationStandardErrors_688b496048ff947b]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {
        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data);
        static PyGetSetDef t_PearsonsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationPValues),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationStandardErrors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PearsonsCorrelation__methods_[] = {
          DECLARE_METHOD(t_PearsonsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, covarianceToCorrelation, METH_O),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationPValues, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationStandardErrors, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PearsonsCorrelation)[] = {
          { Py_tp_methods, t_PearsonsCorrelation__methods_ },
          { Py_tp_init, (void *) t_PearsonsCorrelation_init_ },
          { Py_tp_getset, t_PearsonsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PearsonsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PearsonsCorrelation, t_PearsonsCorrelation, PearsonsCorrelation);

        void t_PearsonsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(PearsonsCorrelation), &PY_TYPE_DEF(PearsonsCorrelation), module, "PearsonsCorrelation", 0);
        }

        void t_PearsonsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "class_", make_descriptor(PearsonsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "wrapfn_", make_descriptor(t_PearsonsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PearsonsCorrelation::initializeClass, 1)))
            return NULL;
          return t_PearsonsCorrelation::wrap_Object(PearsonsCorrelation(((t_PearsonsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PearsonsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PearsonsCorrelation object((jobject) NULL);

              INT_CALL(object = PearsonsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::correlation::Covariance a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::correlation::Covariance::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jint a1;
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = PearsonsCorrelation(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.covarianceToCorrelation(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "covarianceToCorrelation", arg);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap::mids$ = NULL;
      bool OpenIntToFieldHashMap::live$ = false;

      jclass OpenIntToFieldHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_c5199de6167cff95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_e25fb577c07a9ba7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_cd3ef8f900d4dc86] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/hipparchus/FieldElement;)V");
          mids$[mid_containsKey_b6e9be1df30aebaf] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_ffcdb6600dc6671a] = env->getMethodID(cls, "get", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_iterator_8894aa9b322ecaa1] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToFieldHashMap$Iterator;");
          mids$[mid_put_00153cfbaed9aaab] = env->getMethodID(cls, "put", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
          mids$[mid_remove_ffcdb6600dc6671a] = env->getMethodID(cls, "remove", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5199de6167cff95, a0.this$, a1)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e25fb577c07a9ba7, a0.this$, a1.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1, const ::org::hipparchus::FieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd3ef8f900d4dc86, a0.this$, a1, a2.this$)) {}

      jboolean OpenIntToFieldHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_b6e9be1df30aebaf], a0);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::get$(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_get_ffcdb6600dc6671a], a0));
      }

      ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator OpenIntToFieldHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_8894aa9b322ecaa1]));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::put(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_put_00153cfbaed9aaab], a0, a1.this$));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::remove(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remove_ffcdb6600dc6671a], a0));
      }

      jint OpenIntToFieldHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args);
      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToFieldHashMap_init_ },
        { Py_tp_getset, t_OpenIntToFieldHashMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap, t_OpenIntToFieldHashMap, OpenIntToFieldHashMap);
      PyObject *t_OpenIntToFieldHashMap::wrap_Object(const OpenIntToFieldHashMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap), &PY_TYPE_DEF(OpenIntToFieldHashMap), module, "OpenIntToFieldHashMap", 0);
      }

      void t_OpenIntToFieldHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "class_", make_descriptor(OpenIntToFieldHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap::wrap_Object(OpenIntToFieldHashMap(((t_OpenIntToFieldHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::FieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToFieldHashMap$Iterator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_bdf842cbe214f2d2] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_92ced200eac51ce8] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_eba8e72a22c984ac] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bdf842cbe214f2d2], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_92ced200eac51ce8], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_eba8e72a22c984ac]));
        }

        void FieldEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/annotation/DefaultDataContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace annotation {

      ::java::lang::Class *DefaultDataContext::class$ = NULL;
      jmethodID *DefaultDataContext::mids$ = NULL;
      bool DefaultDataContext::live$ = false;

      jclass DefaultDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/annotation/DefaultDataContext");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace annotation {
      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DefaultDataContext__methods_[] = {
        DECLARE_METHOD(t_DefaultDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultDataContext, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultDataContext)[] = {
        { Py_tp_methods, t_DefaultDataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultDataContext, t_DefaultDataContext, DefaultDataContext);

      void t_DefaultDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultDataContext), &PY_TYPE_DEF(DefaultDataContext), module, "DefaultDataContext", 0);
      }

      void t_DefaultDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "class_", make_descriptor(DefaultDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "wrapfn_", make_descriptor(t_DefaultDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultDataContext::initializeClass, 1)))
          return NULL;
        return t_DefaultDataContext::wrap_Object(DefaultDataContext(((t_DefaultDataContext *) arg)->object.this$));
      }
      static PyObject *t_DefaultDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *DSSTNewtonianAttractionContext::mids$ = NULL;
            bool DSSTNewtonianAttractionContext::live$ = false;

            jclass DSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cd156678bfe11e6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)V");
                mids$[mid_getGM_dff5885c2c873297] = env->getMethodID(cls, "getGM", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttractionContext::DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const JArray< jdouble > & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_cd156678bfe11e6f, a0.this$, a1.this$)) {}

            jdouble DSSTNewtonianAttractionContext::getGM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGM_dff5885c2c873297]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self);
            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttractionContext, gM),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttractionContext_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttractionContext, t_DSSTNewtonianAttractionContext, DSSTNewtonianAttractionContext);

            void t_DSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttractionContext), &PY_TYPE_DEF(DSSTNewtonianAttractionContext), module, "DSSTNewtonianAttractionContext", 0);
            }

            void t_DSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "class_", make_descriptor(DSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_DSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttractionContext::wrap_Object(DSSTNewtonianAttractionContext(((t_DSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              DSSTNewtonianAttractionContext object((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTNewtonianAttractionContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGM());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ChiSquaredDistribution::class$ = NULL;
        jmethodID *ChiSquaredDistribution::mids$ = NULL;
        bool ChiSquaredDistribution::live$ = false;

        jclass ChiSquaredDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ChiSquaredDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_dff5885c2c873297] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble ChiSquaredDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble ChiSquaredDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble ChiSquaredDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_dff5885c2c873297]);
        }

        jdouble ChiSquaredDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble ChiSquaredDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble ChiSquaredDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble ChiSquaredDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean ChiSquaredDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble ChiSquaredDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self);
        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data);
        static PyGetSetDef t_ChiSquaredDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ChiSquaredDistribution__methods_[] = {
          DECLARE_METHOD(t_ChiSquaredDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquaredDistribution)[] = {
          { Py_tp_methods, t_ChiSquaredDistribution__methods_ },
          { Py_tp_init, (void *) t_ChiSquaredDistribution_init_ },
          { Py_tp_getset, t_ChiSquaredDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquaredDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ChiSquaredDistribution, t_ChiSquaredDistribution, ChiSquaredDistribution);

        void t_ChiSquaredDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquaredDistribution), &PY_TYPE_DEF(ChiSquaredDistribution), module, "ChiSquaredDistribution", 0);
        }

        void t_ChiSquaredDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "class_", make_descriptor(ChiSquaredDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "wrapfn_", make_descriptor(t_ChiSquaredDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquaredDistribution::initializeClass, 1)))
            return NULL;
          return t_ChiSquaredDistribution::wrap_Object(ChiSquaredDistribution(((t_ChiSquaredDistribution *) arg)->object.this$));
        }
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquaredDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ChiSquaredDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ChiSquaredDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BoundedAttitudeProvider::class$ = NULL;
      jmethodID *BoundedAttitudeProvider::mids$ = NULL;
      bool BoundedAttitudeProvider::live$ = false;

      jclass BoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data);
      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_BoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_BoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_BoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(BoundedAttitudeProvider, t_BoundedAttitudeProvider, BoundedAttitudeProvider);

      void t_BoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedAttitudeProvider), &PY_TYPE_DEF(BoundedAttitudeProvider), module, "BoundedAttitudeProvider", 0);
      }

      void t_BoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "class_", make_descriptor(BoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "wrapfn_", make_descriptor(t_BoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_BoundedAttitudeProvider::wrap_Object(BoundedAttitudeProvider(((t_BoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonAbstractFieldOfView::class$ = NULL;
        jmethodID *PythonAbstractFieldOfView::mids$ = NULL;
        bool PythonAbstractFieldOfView::live$ = false;

        jclass PythonAbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonAbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_d179f90e70a637c1] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractFieldOfView::PythonAbstractFieldOfView(jdouble a0) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        void PythonAbstractFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self);
        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data);
        static PyGetSetDef t_PythonAbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFieldOfView)[] = {
          { Py_tp_methods, t_PythonAbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractFieldOfView_init_ },
          { Py_tp_getset, t_PythonAbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonAbstractFieldOfView, t_PythonAbstractFieldOfView, PythonAbstractFieldOfView);

        void t_PythonAbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractFieldOfView), &PY_TYPE_DEF(PythonAbstractFieldOfView), module, "PythonAbstractFieldOfView", 1);
        }

        void t_PythonAbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "class_", make_descriptor(PythonAbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "wrapfn_", make_descriptor(t_PythonAbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonAbstractFieldOfView_getFootprint0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonAbstractFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractFieldOfView::wrap_Object(PythonAbstractFieldOfView(((t_PythonAbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          PythonAbstractFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = PythonAbstractFieldOfView(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpMath.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpMath::class$ = NULL;
      jmethodID *DfpMath::mids$ = NULL;
      bool DfpMath::live$ = false;

      jclass DfpMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acos_63aa6f5f01162583] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_63aa6f5f01162583] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_63aa6f5f01162583] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_63aa6f5f01162583] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_exp_63aa6f5f01162583] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_63aa6f5f01162583] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_e130e149d282e384] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_bf0539ff9a3c4b26] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_63aa6f5f01162583] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_63aa6f5f01162583] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_logInternal_a9b1d632cbb96ef5] = env->getStaticMethodID(cls, "logInternal", "([Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinInternal_f270b9a5e3fe221e] = env->getStaticMethodID(cls, "sinInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosInternal_f270b9a5e3fe221e] = env->getStaticMethodID(cls, "cosInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanInternal_63aa6f5f01162583] = env->getStaticMethodID(cls, "atanInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitMult_5b7544b58d513937] = env->getStaticMethodID(cls, "splitMult", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitDiv_5b7544b58d513937] = env->getStaticMethodID(cls, "splitDiv", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitPow_75d6ce71b763e873] = env->getStaticMethodID(cls, "splitPow", "([Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expInternal_63aa6f5f01162583] = env->getStaticMethodID(cls, "expInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_7c828ce00258c1eb] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/DfpField;Ljava/lang/String;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_ab6add9cd2aea6cb] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::dfp::Dfp DfpMath::acos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_acos_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::asin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_asin_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::atan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_atan_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::cos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_cos_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::exp(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_exp_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::log(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_log_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_e130e149d282e384], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_bf0539ff9a3c4b26], a0.this$, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::sin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_sin_63aa6f5f01162583], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::tan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_tan_63aa6f5f01162583], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DfpMath__methods_[] = {
        DECLARE_METHOD(t_DfpMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, acos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, asin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, atan, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, cos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, exp, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, log, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, sin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, tan, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpMath)[] = {
        { Py_tp_methods, t_DfpMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpMath, t_DfpMath, DfpMath);

      void t_DfpMath::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpMath), &PY_TYPE_DEF(DfpMath), module, "DfpMath", 0);
      }

      void t_DfpMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "class_", make_descriptor(DfpMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "wrapfn_", make_descriptor(t_DfpMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpMath::initializeClass, 1)))
          return NULL;
        return t_DfpMath::wrap_Object(DfpMath(((t_DfpMath *) arg)->object.this$));
      }
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::acos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "acos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::asin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "asin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::atan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "atan", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::cos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::exp(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "exp", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::log(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "log", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::sin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::tan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "tan", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouAlmanac::class$ = NULL;
            jmethodID *BeidouAlmanac::mids$ = NULL;
            bool BeidouAlmanac::live$ = false;

            jclass BeidouAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_setHealth_99803b0791f320ff] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setI0_8f2e782d5278b131] = env->getMethodID(cls, "setI0", "(DD)V");
                mids$[mid_setSqrtA_17db3a65980d3441] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouAlmanac::BeidouAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint BeidouAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_570ce0828f81a2c1]);
            }

            void BeidouAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_99803b0791f320ff], a0);
            }

            void BeidouAlmanac::setI0(jdouble a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_8f2e782d5278b131], a0, a1);
            }

            void BeidouAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_17db3a65980d3441], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self);
            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args);
            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data);
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouAlmanac, health),
              DECLARE_SET_FIELD(t_BeidouAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouAlmanac__methods_[] = {
              DECLARE_METHOD(t_BeidouAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouAlmanac, setI0, METH_VARARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouAlmanac)[] = {
              { Py_tp_methods, t_BeidouAlmanac__methods_ },
              { Py_tp_init, (void *) t_BeidouAlmanac_init_ },
              { Py_tp_getset, t_BeidouAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(BeidouAlmanac, t_BeidouAlmanac, BeidouAlmanac);

            void t_BeidouAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouAlmanac), &PY_TYPE_DEF(BeidouAlmanac), module, "BeidouAlmanac", 0);
            }

            void t_BeidouAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "class_", make_descriptor(BeidouAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "wrapfn_", make_descriptor(t_BeidouAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouAlmanac::initializeClass, 1)))
                return NULL;
              return t_BeidouAlmanac::wrap_Object(BeidouAlmanac(((t_BeidouAlmanac *) arg)->object.this$));
            }
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds)
            {
              BeidouAlmanac object((jobject) NULL);

              INT_CALL(object = BeidouAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.setI0(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(BeidouAlmanac), (PyObject *) self, "setI0", args, 2);
            }

            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *PolynomialFunctionMatrix::class$ = NULL;
              jmethodID *PolynomialFunctionMatrix::mids$ = NULL;
              bool PolynomialFunctionMatrix::live$ = false;

              jclass PolynomialFunctionMatrix::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_add_efa4915a18761d74] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_getElem_ce4818bdbdc4bb6e] = env->getMethodID(cls, "getElem", "(II)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_getMatrixLine_ca70d17bfdf05b50] = env->getMethodID(cls, "getMatrixLine", "(I)[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_multiply_efa4915a18761d74] = env->getMethodID(cls, "multiply", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_setElem_def4a2d3c56c8af3] = env->getMethodID(cls, "setElem", "(IILorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrix_184d638647e39c2d] = env->getMethodID(cls, "setMatrix", "([[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrixLine_a026c22cde76cbbe] = env->getMethodID(cls, "setMatrixLine", "(I[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::add(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_add_efa4915a18761d74], a0.this$));
              }

              ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialFunctionMatrix::getElem(jint a0, jint a1) const
              {
                return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callObjectMethod(this$, mids$[mid_getElem_ce4818bdbdc4bb6e], a0, a1));
              }

              JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialFunctionMatrix::getMatrixLine(jint a0) const
              {
                return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getMatrixLine_ca70d17bfdf05b50], a0));
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::multiply(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_multiply_efa4915a18761d74], a0.this$));
              }

              void PolynomialFunctionMatrix::setElem(jint a0, jint a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setElem_def4a2d3c56c8af3], a0, a1, a2.this$);
              }

              void PolynomialFunctionMatrix::setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrix_184d638647e39c2d], a0.this$);
              }

              void PolynomialFunctionMatrix::setMatrixLine(jint a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrixLine_a026c22cde76cbbe], a0, a1.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args);
              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data);
              static PyGetSetDef t_PolynomialFunctionMatrix__fields_[] = {
                DECLARE_SET_FIELD(t_PolynomialFunctionMatrix, matrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PolynomialFunctionMatrix__methods_[] = {
                DECLARE_METHOD(t_PolynomialFunctionMatrix, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, add, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getMatrixLine, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, multiply, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrix, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrixLine, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionMatrix)[] = {
                { Py_tp_methods, t_PolynomialFunctionMatrix__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PolynomialFunctionMatrix__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PolynomialFunctionMatrix)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PolynomialFunctionMatrix, t_PolynomialFunctionMatrix, PolynomialFunctionMatrix);

              void t_PolynomialFunctionMatrix::install(PyObject *module)
              {
                installType(&PY_TYPE(PolynomialFunctionMatrix), &PY_TYPE_DEF(PolynomialFunctionMatrix), module, "PolynomialFunctionMatrix", 0);
              }

              void t_PolynomialFunctionMatrix::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "class_", make_descriptor(PolynomialFunctionMatrix::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "wrapfn_", make_descriptor(t_PolynomialFunctionMatrix::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PolynomialFunctionMatrix::initializeClass, 1)))
                  return NULL;
                return t_PolynomialFunctionMatrix::wrap_Object(PolynomialFunctionMatrix(((t_PolynomialFunctionMatrix *) arg)->object.this$));
              }
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PolynomialFunctionMatrix::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "add", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getElem(a0, a1));
                  return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getMatrixLine(a0));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
                }

                PyErr_SetArgsError((PyObject *) self, "getMatrixLine", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.multiply(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "multiply", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);

                if (!parseArgs(args, "IIk", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setElem(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > a0((jobject) NULL);

                if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrix", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);

                if (!parseArgs(args, "I[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.setMatrixLine(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrixLine", args);
                return NULL;
              }

              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > value((jobject) NULL);
                  if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMatrix(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "matrix", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSAlmanac::class$ = NULL;
            jmethodID *GLONASSAlmanac::mids$ = NULL;
            bool GLONASSAlmanac::live$ = false;

            jclass GLONASSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_927876482883ca32] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDD)V");
                mids$[mid_init$_7f68134dc9a2ca41] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDDLorg/orekit/time/TimeScale;)V");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getDeltaI_dff5885c2c873297] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_dff5885c2c873297] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_dff5885c2c873297] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getFrequencyChannel_570ce0828f81a2c1] = env->getMethodID(cls, "getFrequencyChannel", "()I");
                mids$[mid_getGPS2Glo_dff5885c2c873297] = env->getMethodID(cls, "getGPS2Glo", "()D");
                mids$[mid_getGlo2UTC_dff5885c2c873297] = env->getMethodID(cls, "getGlo2UTC", "()D");
                mids$[mid_getGloOffset_dff5885c2c873297] = env->getMethodID(cls, "getGloOffset", "()D");
                mids$[mid_getHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getLambda_dff5885c2c873297] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_570ce0828f81a2c1] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_570ce0828f81a2c1] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_169032d2e880ec70] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_5f8b38de0b54bda6] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_94b5f5c6e1c39dbc] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_927876482883ca32, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)) {}

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, const ::org::orekit::time::TimeScale & a15) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f68134dc9a2ca41, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSAlmanac::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jdouble GLONASSAlmanac::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_dff5885c2c873297]);
            }

            jdouble GLONASSAlmanac::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_dff5885c2c873297]);
            }

            jdouble GLONASSAlmanac::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_dff5885c2c873297]);
            }

            jdouble GLONASSAlmanac::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
            }

            jint GLONASSAlmanac::getFrequencyChannel() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyChannel_570ce0828f81a2c1]);
            }

            jdouble GLONASSAlmanac::getGPS2Glo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGPS2Glo_dff5885c2c873297]);
            }

            jdouble GLONASSAlmanac::getGlo2UTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGlo2UTC_dff5885c2c873297]);
            }

            jdouble GLONASSAlmanac::getGloOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGloOffset_dff5885c2c873297]);
            }

            jint GLONASSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_570ce0828f81a2c1]);
            }

            jdouble GLONASSAlmanac::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_dff5885c2c873297]);
            }

            jint GLONASSAlmanac::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_570ce0828f81a2c1]);
            }

            jint GLONASSAlmanac::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_570ce0828f81a2c1]);
            }

            jdouble GLONASSAlmanac::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_169032d2e880ec70]));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_5f8b38de0b54bda6], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_94b5f5c6e1c39dbc], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GLONASSAlmanac::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args);
            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data);
            static PyGetSetDef t_GLONASSAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSAlmanac, date),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaI),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaT),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, e),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, frequencyChannel),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gPS2Glo),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, glo2UTC),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gloOffset),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, health),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, lambda),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, n4),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, na),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, pa),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, propagator),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, time),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GLONASSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getFrequencyChannel, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGPS2Glo, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGlo2UTC, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGloOffset, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getTime, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSAlmanac)[] = {
              { Py_tp_methods, t_GLONASSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GLONASSAlmanac_init_ },
              { Py_tp_getset, t_GLONASSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSAlmanac)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSAlmanac, t_GLONASSAlmanac, GLONASSAlmanac);

            void t_GLONASSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSAlmanac), &PY_TYPE_DEF(GLONASSAlmanac), module, "GLONASSAlmanac", 0);
            }

            void t_GLONASSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "class_", make_descriptor(GLONASSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "wrapfn_", make_descriptor(t_GLONASSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GLONASSAlmanac::wrap_Object(GLONASSAlmanac(((t_GLONASSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 15:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 16:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  ::org::orekit::time::TimeScale a15((jobject) NULL);
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGloOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGloOffset());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *PythonMessageObserver::class$ = NULL;
          jmethodID *PythonMessageObserver::mids$ = NULL;
          bool PythonMessageObserver::live$ = false;

          jclass PythonMessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/PythonMessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_messageAvailable_4d53d7b30f77764b] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageObserver::PythonMessageObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonMessageObserver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonMessageObserver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonMessageObserver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {
          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self);
          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args);
          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data);
          static PyGetSetDef t_PythonMessageObserver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageObserver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageObserver__methods_[] = {
            DECLARE_METHOD(t_PythonMessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageObserver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageObserver)[] = {
            { Py_tp_methods, t_PythonMessageObserver__methods_ },
            { Py_tp_init, (void *) t_PythonMessageObserver_init_ },
            { Py_tp_getset, t_PythonMessageObserver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageObserver, t_PythonMessageObserver, PythonMessageObserver);

          void t_PythonMessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageObserver), &PY_TYPE_DEF(PythonMessageObserver), module, "PythonMessageObserver", 1);
          }

          void t_PythonMessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "class_", make_descriptor(PythonMessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "wrapfn_", make_descriptor(t_PythonMessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageObserver::initializeClass);
            JNINativeMethod methods[] = {
              { "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V", (void *) t_PythonMessageObserver_messageAvailable0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageObserver_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageObserver::initializeClass, 1)))
              return NULL;
            return t_PythonMessageObserver::wrap_Object(PythonMessageObserver(((t_PythonMessageObserver *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageObserver object((jobject) NULL);

            INT_CALL(object = PythonMessageObserver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = env->fromJString((jstring) a0, 0);
            PyObject *o1 = ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(::org::orekit::gnss::metric::messages::ParsedMessage(a1));
            PyObject *result = PyObject_CallMethod(obj, "messageAvailable", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarS::class$ = NULL;
          jmethodID *FieldCopolarS::mids$ = NULL;
          bool FieldCopolarS::live$ = false;

          jclass FieldCopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_eba8e72a22c984ac] = env->getMethodID(cls, "cs", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ds_eba8e72a22c984ac] = env->getMethodID(cls, "ds", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ns_eba8e72a22c984ac] = env->getMethodID(cls, "ns", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::cs() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cs_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ds() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ds_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ns() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ns_eba8e72a22c984ac]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args);
          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data);
          static PyGetSetDef t_FieldCopolarS__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarS, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarS__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarS)[] = {
            { Py_tp_methods, t_FieldCopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarS__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarS, t_FieldCopolarS, FieldCopolarS);
          PyObject *t_FieldCopolarS::wrap_Object(const FieldCopolarS& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarS::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarS), &PY_TYPE_DEF(FieldCopolarS), module, "FieldCopolarS", 0);
          }

          void t_FieldCopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "class_", make_descriptor(FieldCopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "wrapfn_", make_descriptor(t_FieldCopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarS::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarS::wrap_Object(FieldCopolarS(((t_FieldCopolarS *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cs());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ds());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ns());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxIter::class$ = NULL;
      jmethodID *MaxIter::mids$ = NULL;
      bool MaxIter::live$ = false;

      jclass MaxIter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxIter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxIter_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIter", "()I");
          mids$[mid_unlimited_e180e63eb968de6e] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxIter;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxIter::MaxIter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      jint MaxIter::getMaxIter() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIter_570ce0828f81a2c1]);
      }

      MaxIter MaxIter::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxIter(env->callStaticObjectMethod(cls, mids$[mid_unlimited_e180e63eb968de6e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self);
      static PyObject *t_MaxIter_unlimited(PyTypeObject *type);
      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data);
      static PyGetSetDef t_MaxIter__fields_[] = {
        DECLARE_GET_FIELD(t_MaxIter, maxIter),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxIter__methods_[] = {
        DECLARE_METHOD(t_MaxIter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxIter, getMaxIter, METH_NOARGS),
        DECLARE_METHOD(t_MaxIter, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxIter)[] = {
        { Py_tp_methods, t_MaxIter__methods_ },
        { Py_tp_init, (void *) t_MaxIter_init_ },
        { Py_tp_getset, t_MaxIter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxIter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxIter, t_MaxIter, MaxIter);

      void t_MaxIter::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxIter), &PY_TYPE_DEF(MaxIter), module, "MaxIter", 0);
      }

      void t_MaxIter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "class_", make_descriptor(MaxIter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "wrapfn_", make_descriptor(t_MaxIter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxIter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxIter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxIter::initializeClass, 1)))
          return NULL;
        return t_MaxIter::wrap_Object(MaxIter(((t_MaxIter *) arg)->object.this$));
      }
      static PyObject *t_MaxIter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxIter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxIter_init_(t_MaxIter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxIter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxIter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxIter_getMaxIter(t_MaxIter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIter());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxIter_unlimited(PyTypeObject *type)
      {
        MaxIter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxIter::unlimited());
        return t_MaxIter::wrap_Object(result);
      }

      static PyObject *t_MaxIter_get__maxIter(t_MaxIter *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIter());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttraction::class$ = NULL;
        jmethodID *ThirdBodyAttraction::mids$ = NULL;
        bool ThirdBodyAttraction::live$ = false;
        ::java::lang::String *ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass ThirdBodyAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6a22a7b4e14949e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttraction::ThirdBodyAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a22a7b4e14949e4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThirdBodyAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean ThirdBodyAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List ThirdBodyAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args);
        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self);
        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data);
        static PyGetSetDef t_ThirdBodyAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_ThirdBodyAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThirdBodyAttraction__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ThirdBodyAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttraction)[] = {
          { Py_tp_methods, t_ThirdBodyAttraction__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttraction_init_ },
          { Py_tp_getset, t_ThirdBodyAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttraction, t_ThirdBodyAttraction, ThirdBodyAttraction);

        void t_ThirdBodyAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttraction), &PY_TYPE_DEF(ThirdBodyAttraction), module, "ThirdBodyAttraction", 0);
        }

        void t_ThirdBodyAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "class_", make_descriptor(ThirdBodyAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "wrapfn_", make_descriptor(t_ThirdBodyAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(ThirdBodyAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*ThirdBodyAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_ThirdBodyAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttraction::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttraction::wrap_Object(ThirdBodyAttraction(((t_ThirdBodyAttraction *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttraction_init_(t_ThirdBodyAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttraction_acceleration(t_ThirdBodyAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ThirdBodyAttraction_dependsOnPositionOnly(t_ThirdBodyAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ThirdBodyAttraction_getParametersDrivers(t_ThirdBodyAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ThirdBodyAttraction_get__parametersDrivers(t_ThirdBodyAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonIAUPole.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonIAUPole::class$ = NULL;
      jmethodID *PythonIAUPole::mids$ = NULL;
      bool PythonIAUPole::live$ = false;

      jclass PythonIAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonIAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getNode_24461752d0eea1e3] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_e81fa067750860a1] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_24461752d0eea1e3] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_e81fa067750860a1] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_bf1d7732f1acb697] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_2a5f05be83ff251d] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonIAUPole::PythonIAUPole() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonIAUPole::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonIAUPole::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonIAUPole::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self);
      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args);
      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data);
      static PyGetSetDef t_PythonIAUPole__fields_[] = {
        DECLARE_GET_FIELD(t_PythonIAUPole, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonIAUPole__methods_[] = {
        DECLARE_METHOD(t_PythonIAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonIAUPole, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonIAUPole)[] = {
        { Py_tp_methods, t_PythonIAUPole__methods_ },
        { Py_tp_init, (void *) t_PythonIAUPole_init_ },
        { Py_tp_getset, t_PythonIAUPole__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonIAUPole)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonIAUPole, t_PythonIAUPole, PythonIAUPole);

      void t_PythonIAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonIAUPole), &PY_TYPE_DEF(PythonIAUPole), module, "PythonIAUPole", 1);
      }

      void t_PythonIAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "class_", make_descriptor(PythonIAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "wrapfn_", make_descriptor(t_PythonIAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonIAUPole::initializeClass);
        JNINativeMethod methods[] = {
          { "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getNode0 },
          { "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getNode1 },
          { "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getPole2 },
          { "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getPole3 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonIAUPole_getPrimeMeridianAngle4 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIAUPole_getPrimeMeridianAngle5 },
          { "pythonDecRef", "()V", (void *) t_PythonIAUPole_pythonDecRef6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonIAUPole::initializeClass, 1)))
          return NULL;
        return t_PythonIAUPole::wrap_Object(PythonIAUPole(((t_PythonIAUPole *) arg)->object.this$));
      }
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonIAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds)
      {
        PythonIAUPole object((jobject) NULL);

        INT_CALL(object = PythonIAUPole());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ElevationFilter::class$ = NULL;
          jmethodID *ElevationFilter::mids$ = NULL;
          bool ElevationFilter::live$ = false;

          jclass ElevationFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ElevationFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_01ab7ff4b696a7ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;D)V");
              mids$[mid_filter_ba898b75be14e8ca] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ElevationFilter::ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01ab7ff4b696a7ab, a0.this$, a1)) {}

          void ElevationFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_ba898b75be14e8ca], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args);
          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args);
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data);
          static PyGetSetDef t_ElevationFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ElevationFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ElevationFilter__methods_[] = {
            DECLARE_METHOD(t_ElevationFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ElevationFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ElevationFilter)[] = {
            { Py_tp_methods, t_ElevationFilter__methods_ },
            { Py_tp_init, (void *) t_ElevationFilter_init_ },
            { Py_tp_getset, t_ElevationFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ElevationFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ElevationFilter, t_ElevationFilter, ElevationFilter);
          PyObject *t_ElevationFilter::wrap_Object(const ElevationFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ElevationFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ElevationFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ElevationFilter), &PY_TYPE_DEF(ElevationFilter), module, "ElevationFilter", 0);
          }

          void t_ElevationFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "class_", make_descriptor(ElevationFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "wrapfn_", make_descriptor(t_ElevationFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ElevationFilter::initializeClass, 1)))
              return NULL;
            return t_ElevationFilter::wrap_Object(ElevationFilter(((t_ElevationFilter *) arg)->object.this$));
          }
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ElevationFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            jdouble a1;
            ElevationFilter object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::estimation::measurements::GroundStation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ElevationFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableTimeStampedCache::mids$ = NULL;
      bool ImmutableTimeStampedCache::live$ = false;

      jclass ImmutableTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11390acb87dd159d] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_6750a7a81e7b6495] = env->getStaticMethodID(cls, "emptyCache", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getAll_2afa36052df4765d] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_a067290de6165283] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableTimeStampedCache::ImmutableTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11390acb87dd159d, a0, a1.this$)) {}

      ImmutableTimeStampedCache ImmutableTimeStampedCache::emptyCache()
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_6750a7a81e7b6495]));
      }

      ::java::util::List ImmutableTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_2afa36052df4765d]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_c2a1e08c7d64b02c]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_c2a1e08c7d64b02c]));
      }

      jint ImmutableTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1]);
      }

      ::java::util::stream::Stream ImmutableTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_a067290de6165283], a0.this$, a1));
      }

      ::java::lang::String ImmutableTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args);
      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type);
      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, emptyCache, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableTimeStampedCache, t_ImmutableTimeStampedCache, ImmutableTimeStampedCache);
      PyObject *t_ImmutableTimeStampedCache::wrap_Object(const ImmutableTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ImmutableTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ImmutableTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableTimeStampedCache), &PY_TYPE_DEF(ImmutableTimeStampedCache), module, "ImmutableTimeStampedCache", 0);
      }

      void t_ImmutableTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "class_", make_descriptor(ImmutableTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableTimeStampedCache::wrap_Object(ImmutableTimeStampedCache(((t_ImmutableTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type)
      {
        ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::ImmutableTimeStampedCache::emptyCache());
        return t_ImmutableTimeStampedCache::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ISAACRandom.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ISAACRandom::class$ = NULL;
      jmethodID *ISAACRandom::mids$ = NULL;
      bool ISAACRandom::live$ = false;

      jclass ISAACRandom::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ISAACRandom");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ISAACRandom::ISAACRandom() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ISAACRandom::ISAACRandom(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      ISAACRandom::ISAACRandom(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint ISAACRandom::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      void ISAACRandom::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args);
      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args);
      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data);
      static PyGetSetDef t_ISAACRandom__fields_[] = {
        DECLARE_SET_FIELD(t_ISAACRandom, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ISAACRandom__methods_[] = {
        DECLARE_METHOD(t_ISAACRandom, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ISAACRandom, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ISAACRandom)[] = {
        { Py_tp_methods, t_ISAACRandom__methods_ },
        { Py_tp_init, (void *) t_ISAACRandom_init_ },
        { Py_tp_getset, t_ISAACRandom__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ISAACRandom)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(ISAACRandom, t_ISAACRandom, ISAACRandom);

      void t_ISAACRandom::install(PyObject *module)
      {
        installType(&PY_TYPE(ISAACRandom), &PY_TYPE_DEF(ISAACRandom), module, "ISAACRandom", 0);
      }

      void t_ISAACRandom::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "class_", make_descriptor(ISAACRandom::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "wrapfn_", make_descriptor(t_ISAACRandom::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ISAACRandom::initializeClass, 1)))
          return NULL;
        return t_ISAACRandom::wrap_Object(ISAACRandom(((t_ISAACRandom *) arg)->object.this$));
      }
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ISAACRandom::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ISAACRandom object((jobject) NULL);

            INT_CALL(object = ISAACRandom());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Generator::class$ = NULL;
          jmethodID *Generator::mids$ = NULL;
          bool Generator::live$ = false;

          jclass Generator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Generator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addPropagator_6b3027443757e400] = env->getMethodID(cls, "addPropagator", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_addScheduler_f2ce6ed50b446901] = env->getMethodID(cls, "addScheduler", "(Lorg/orekit/estimation/measurements/generation/Scheduler;)V");
              mids$[mid_addSubscriber_8cb70f19f7145a16] = env->getMethodID(cls, "addSubscriber", "(Lorg/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber;)V");
              mids$[mid_generate_a9e71d848b81c8f8] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getPropagator_0b01f316a88c3e09] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/estimation/measurements/ObservableSatellite;)Lorg/orekit/propagation/Propagator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Generator::Generator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::orekit::estimation::measurements::ObservableSatellite Generator::addPropagator(const ::org::orekit::propagation::Propagator & a0) const
          {
            return ::org::orekit::estimation::measurements::ObservableSatellite(env->callObjectMethod(this$, mids$[mid_addPropagator_6b3027443757e400], a0.this$));
          }

          void Generator::addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addScheduler_f2ce6ed50b446901], a0.this$);
          }

          void Generator::addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSubscriber_8cb70f19f7145a16], a0.this$);
          }

          void Generator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_generate_a9e71d848b81c8f8], a0.this$, a1.this$);
          }

          ::org::orekit::propagation::Propagator Generator::getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite & a0) const
          {
            return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_0b01f316a88c3e09], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args);
          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg);

          static PyMethodDef t_Generator__methods_[] = {
            DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, addPropagator, METH_O),
            DECLARE_METHOD(t_Generator, addScheduler, METH_O),
            DECLARE_METHOD(t_Generator, addSubscriber, METH_O),
            DECLARE_METHOD(t_Generator, generate, METH_VARARGS),
            DECLARE_METHOD(t_Generator, getPropagator, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
            { Py_tp_methods, t_Generator__methods_ },
            { Py_tp_init, (void *) t_Generator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Generator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Generator, t_Generator, Generator);

          void t_Generator::install(PyObject *module)
          {
            installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
          }

          void t_Generator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
              return NULL;
            return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
          }
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Generator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds)
          {
            Generator object((jobject) NULL);

            INT_CALL(object = Generator());
            self->object = object;

            return 0;
          }

          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addPropagator(a0));
              return ::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addPropagator", arg);
            return NULL;
          }

          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::Scheduler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::generation::Scheduler::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_Scheduler::parameters_))
            {
              OBJ_CALL(self->object.addScheduler(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScheduler", arg);
            return NULL;
          }

          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSubscriber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSubscriber", arg);
            return NULL;
          }

          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.generate(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "generate", args);
            return NULL;
          }

          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::propagation::Propagator result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPropagator(a0));
              return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPropagator", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *EllipsoidId::class$ = NULL;
        jmethodID *EllipsoidId::mids$ = NULL;
        bool EllipsoidId::live$ = false;
        EllipsoidId *EllipsoidId::GRS80 = NULL;
        EllipsoidId *EllipsoidId::IERS2003 = NULL;
        EllipsoidId *EllipsoidId::IERS96 = NULL;
        EllipsoidId *EllipsoidId::WGS84 = NULL;

        jclass EllipsoidId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/EllipsoidId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_2ee579d46b5afd6e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/EllipsoidId;");
            mids$[mid_values_cafa0e1d3358d16c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/EllipsoidId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GRS80 = new EllipsoidId(env->getStaticObjectField(cls, "GRS80", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS2003 = new EllipsoidId(env->getStaticObjectField(cls, "IERS2003", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS96 = new EllipsoidId(env->getStaticObjectField(cls, "IERS96", "Lorg/orekit/rugged/api/EllipsoidId;"));
            WGS84 = new EllipsoidId(env->getStaticObjectField(cls, "WGS84", "Lorg/orekit/rugged/api/EllipsoidId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipsoidId EllipsoidId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EllipsoidId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2ee579d46b5afd6e], a0.this$));
        }

        JArray< EllipsoidId > EllipsoidId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EllipsoidId >(env->callStaticObjectMethod(cls, mids$[mid_values_cafa0e1d3358d16c]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args);
        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EllipsoidId_values(PyTypeObject *type);
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data);
        static PyGetSetDef t_EllipsoidId__fields_[] = {
          DECLARE_GET_FIELD(t_EllipsoidId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipsoidId__methods_[] = {
          DECLARE_METHOD(t_EllipsoidId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, of_, METH_VARARGS),
          DECLARE_METHOD(t_EllipsoidId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipsoidId)[] = {
          { Py_tp_methods, t_EllipsoidId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EllipsoidId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipsoidId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EllipsoidId, t_EllipsoidId, EllipsoidId);
        PyObject *t_EllipsoidId::wrap_Object(const EllipsoidId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EllipsoidId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EllipsoidId::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipsoidId), &PY_TYPE_DEF(EllipsoidId), module, "EllipsoidId", 0);
        }

        void t_EllipsoidId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "class_", make_descriptor(EllipsoidId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "wrapfn_", make_descriptor(t_EllipsoidId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "boxfn_", make_descriptor(boxObject));
          env->getClass(EllipsoidId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "GRS80", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::GRS80)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS2003", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS2003)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS96", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS96)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "WGS84", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::WGS84)));
        }

        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipsoidId::initializeClass, 1)))
            return NULL;
          return t_EllipsoidId::wrap_Object(EllipsoidId(((t_EllipsoidId *) arg)->object.this$));
        }
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipsoidId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EllipsoidId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::valueOf(a0));
            return t_EllipsoidId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EllipsoidId_values(PyTypeObject *type)
        {
          JArray< EllipsoidId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::values());
          return JArray<jobject>(result.this$).wrap(t_EllipsoidId::wrap_jobject);
        }
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *LocalizedOptimFormats::class$ = NULL;
      jmethodID *LocalizedOptimFormats::mids$ = NULL;
      bool LocalizedOptimFormats::live$ = false;
      LocalizedOptimFormats *LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::INVALID_IMPLEMENTATION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::NO_FEASIBLE_SOLUTION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TRUST_REGION_STEP_FAILED = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNBOUNDED_SOLUTION = NULL;

      jclass LocalizedOptimFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/LocalizedOptimFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_c4eb37bc1f8e3659] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/LocalizedOptimFormats;");
          mids$[mid_values_92d1099fb0c9b32e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/LocalizedOptimFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQUAL_VERTICES_IN_SIMPLEX = new LocalizedOptimFormats(env->getStaticObjectField(cls, "EQUAL_VERTICES_IN_SIMPLEX", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          INVALID_IMPLEMENTATION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "INVALID_IMPLEMENTATION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          NO_FEASIBLE_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "NO_FEASIBLE_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          SIMPLEX_NEED_ONE_POINT = new LocalizedOptimFormats(env->getStaticObjectField(cls, "SIMPLEX_NEED_ONE_POINT", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_COST_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_COST_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_ORTHOGONALITY_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_ORTHOGONALITY_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TRUST_REGION_STEP_FAILED = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TRUST_REGION_STEP_FAILED", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_SOLVE_SINGULAR_PROBLEM = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNBOUNDED_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNBOUNDED_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedOptimFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String LocalizedOptimFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      LocalizedOptimFormats LocalizedOptimFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedOptimFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c4eb37bc1f8e3659], a0.this$));
      }

      JArray< LocalizedOptimFormats > LocalizedOptimFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedOptimFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_92d1099fb0c9b32e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self);
      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data);
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data);
      static PyGetSetDef t_LocalizedOptimFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedOptimFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedOptimFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedOptimFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedOptimFormats)[] = {
        { Py_tp_methods, t_LocalizedOptimFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedOptimFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedOptimFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedOptimFormats, t_LocalizedOptimFormats, LocalizedOptimFormats);
      PyObject *t_LocalizedOptimFormats::wrap_Object(const LocalizedOptimFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedOptimFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedOptimFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedOptimFormats), &PY_TYPE_DEF(LocalizedOptimFormats), module, "LocalizedOptimFormats", 0);
      }

      void t_LocalizedOptimFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "class_", make_descriptor(LocalizedOptimFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "wrapfn_", make_descriptor(t_LocalizedOptimFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedOptimFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "EQUAL_VERTICES_IN_SIMPLEX", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "INVALID_IMPLEMENTATION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::INVALID_IMPLEMENTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "NO_FEASIBLE_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::NO_FEASIBLE_SOLUTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "SIMPLEX_NEED_ONE_POINT", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_COST_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_ORTHOGONALITY_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TRUST_REGION_STEP_FAILED", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TRUST_REGION_STEP_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNBOUNDED_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNBOUNDED_SOLUTION)));
      }

      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedOptimFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedOptimFormats::wrap_Object(LocalizedOptimFormats(((t_LocalizedOptimFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedOptimFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedOptimFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::valueOf(a0));
          return t_LocalizedOptimFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedOptimFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedOptimFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *AlgorithmId::class$ = NULL;
        jmethodID *AlgorithmId::mids$ = NULL;
        bool AlgorithmId::live$ = false;
        AlgorithmId *AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = NULL;
        AlgorithmId *AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE_FLAT_BODY = NULL;
        AlgorithmId *AlgorithmId::IGNORE_DEM_USE_ELLIPSOID = NULL;

        jclass AlgorithmId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/AlgorithmId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_8db6f61ecceab082] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_values_1fb04805027a7535] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/AlgorithmId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = new AlgorithmId(env->getStaticObjectField(cls, "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            CONSTANT_ELEVATION_OVER_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "CONSTANT_ELEVATION_OVER_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE_FLAT_BODY = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE_FLAT_BODY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            IGNORE_DEM_USE_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "IGNORE_DEM_USE_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlgorithmId AlgorithmId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlgorithmId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8db6f61ecceab082], a0.this$));
        }

        JArray< AlgorithmId > AlgorithmId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlgorithmId >(env->callStaticObjectMethod(cls, mids$[mid_values_1fb04805027a7535]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args);
        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlgorithmId_values(PyTypeObject *type);
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data);
        static PyGetSetDef t_AlgorithmId__fields_[] = {
          DECLARE_GET_FIELD(t_AlgorithmId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlgorithmId__methods_[] = {
          DECLARE_METHOD(t_AlgorithmId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlgorithmId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlgorithmId)[] = {
          { Py_tp_methods, t_AlgorithmId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlgorithmId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlgorithmId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlgorithmId, t_AlgorithmId, AlgorithmId);
        PyObject *t_AlgorithmId::wrap_Object(const AlgorithmId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlgorithmId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlgorithmId::install(PyObject *module)
        {
          installType(&PY_TYPE(AlgorithmId), &PY_TYPE_DEF(AlgorithmId), module, "AlgorithmId", 0);
        }

        void t_AlgorithmId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "class_", make_descriptor(AlgorithmId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "wrapfn_", make_descriptor(t_AlgorithmId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlgorithmId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "CONSTANT_ELEVATION_OVER_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE_FLAT_BODY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE_FLAT_BODY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "IGNORE_DEM_USE_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::IGNORE_DEM_USE_ELLIPSOID)));
        }

        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlgorithmId::initializeClass, 1)))
            return NULL;
          return t_AlgorithmId::wrap_Object(AlgorithmId(((t_AlgorithmId *) arg)->object.this$));
        }
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlgorithmId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlgorithmId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::valueOf(a0));
            return t_AlgorithmId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlgorithmId_values(PyTypeObject *type)
        {
          JArray< AlgorithmId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::values());
          return JArray<jobject>(result.this$).wrap(t_AlgorithmId::wrap_jobject);
        }
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Inertia::class$ = NULL;
              jmethodID *Inertia::mids$ = NULL;
              bool Inertia::live$ = false;

              jclass Inertia::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Inertia");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getFrame_5d5dd95b04037824] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInertiaMatrix_688b496048ff947b] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_setFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setInertiaMatrixEntry_1506189166690b5e] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Inertia::Inertia() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::files::ccsds::definitions::FrameFacade Inertia::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_5d5dd95b04037824]));
              }

              ::org::hipparchus::linear::RealMatrix Inertia::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_688b496048ff947b]));
              }

              void Inertia::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void Inertia::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_1506189166690b5e], a0, a1, a2);
              }

              void Inertia::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Inertia_getFrame(t_Inertia *self);
              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self);
              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg);
              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data);
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data);
              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data);
              static PyGetSetDef t_Inertia__fields_[] = {
                DECLARE_GETSET_FIELD(t_Inertia, frame),
                DECLARE_GET_FIELD(t_Inertia, inertiaMatrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Inertia__methods_[] = {
                DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, setFrame, METH_O),
                DECLARE_METHOD(t_Inertia, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_Inertia, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
                { Py_tp_methods, t_Inertia__methods_ },
                { Py_tp_init, (void *) t_Inertia_init_ },
                { Py_tp_getset, t_Inertia__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(Inertia, t_Inertia, Inertia);

              void t_Inertia::install(PyObject *module)
              {
                installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
              }

              void t_Inertia::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
                  return NULL;
                return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
              }
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Inertia::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds)
              {
                Inertia object((jobject) NULL);

                INT_CALL(object = Inertia());
                self->object = object;

                return 0;
              }

              static PyObject *t_Inertia_getFrame(t_Inertia *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Inertia), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposer::class$ = NULL;
      jmethodID *FieldLUDecomposer::mids$ = NULL;
      bool FieldLUDecomposer::live$ = false;

      jclass FieldLUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_f65caede4265247f] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_f65caede4265247f], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args);
      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data);
      static PyGetSetDef t_FieldLUDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposer)[] = {
        { Py_tp_methods, t_FieldLUDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldLUDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposer, t_FieldLUDecomposer, FieldLUDecomposer);
      PyObject *t_FieldLUDecomposer::wrap_Object(const FieldLUDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposer), &PY_TYPE_DEF(FieldLUDecomposer), module, "FieldLUDecomposer", 0);
      }

      void t_FieldLUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "class_", make_descriptor(FieldLUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "wrapfn_", make_descriptor(t_FieldLUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposer::wrap_Object(FieldLUDecomposer(((t_FieldLUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractWindUp::class$ = NULL;
          jmethodID *AbstractWindUp::mids$ = NULL;
          bool AbstractWindUp::live$ = false;

          jclass AbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_emitterToInert_e7f87679ee42d076] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_e7f87679ee42d076] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractWindUp::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void AbstractWindUp::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args);
          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self);
          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg);
          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data);
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data);
          static PyGetSetDef t_AbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractWindUp, parametersDrivers),
            DECLARE_GET_FIELD(t_AbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_AbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractWindUp, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractWindUp, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWindUp)[] = {
            { Py_tp_methods, t_AbstractWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWindUp)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWindUp, t_AbstractWindUp, AbstractWindUp);
          PyObject *t_AbstractWindUp::wrap_Object(const AbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWindUp), &PY_TYPE_DEF(AbstractWindUp), module, "AbstractWindUp", 0);
          }

          void t_AbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "class_", make_descriptor(AbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "wrapfn_", make_descriptor(t_AbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_AbstractWindUp::wrap_Object(AbstractWindUp(((t_AbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogisticDistribution::class$ = NULL;
        jmethodID *LogisticDistribution::mids$ = NULL;
        bool LogisticDistribution::live$ = false;

        jclass LogisticDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogisticDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_dff5885c2c873297] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogisticDistribution::LogisticDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble LogisticDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble LogisticDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble LogisticDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble LogisticDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean LogisticDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data);
        static PyGetSetDef t_LogisticDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogisticDistribution, location),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogisticDistribution, scale),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogisticDistribution__methods_[] = {
          DECLARE_METHOD(t_LogisticDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogisticDistribution)[] = {
          { Py_tp_methods, t_LogisticDistribution__methods_ },
          { Py_tp_init, (void *) t_LogisticDistribution_init_ },
          { Py_tp_getset, t_LogisticDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogisticDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogisticDistribution, t_LogisticDistribution, LogisticDistribution);

        void t_LogisticDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogisticDistribution), &PY_TYPE_DEF(LogisticDistribution), module, "LogisticDistribution", 0);
        }

        void t_LogisticDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "class_", make_descriptor(LogisticDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "wrapfn_", make_descriptor(t_LogisticDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogisticDistribution::initializeClass, 1)))
            return NULL;
          return t_LogisticDistribution::wrap_Object(LogisticDistribution(((t_LogisticDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogisticDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LogisticDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LogisticDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedCache::class$ = NULL;
      jmethodID *TimeStampedCache::mids$ = NULL;
      bool TimeStampedCache::live$ = false;

      jclass TimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_c2a1e08c7d64b02c] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_52c888e7e44261e4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_a067290de6165283] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_c2a1e08c7d64b02c]));
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_c2a1e08c7d64b02c]));
      }

      jint TimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_570ce0828f81a2c1]);
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_52c888e7e44261e4], a0.this$));
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_a067290de6165283], a0.this$, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data);
      static PyGetSetDef t_TimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_TimeStampedCache, latest),
        DECLARE_GET_FIELD(t_TimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_TimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getNeighbors, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCache)[] = {
        { Py_tp_methods, t_TimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedCache, t_TimeStampedCache, TimeStampedCache);
      PyObject *t_TimeStampedCache::wrap_Object(const TimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCache), &PY_TYPE_DEF(TimeStampedCache), module, "TimeStampedCache", 0);
      }

      void t_TimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "class_", make_descriptor(TimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "wrapfn_", make_descriptor(t_TimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCache::wrap_Object(TimeStampedCache(((t_TimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint a1;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0, a1));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
