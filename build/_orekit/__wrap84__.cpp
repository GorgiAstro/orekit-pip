#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SolutionCallback.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SolutionCallback::class$ = NULL;
        jmethodID *SolutionCallback::mids$ = NULL;
        bool SolutionCallback::live$ = false;

        jclass SolutionCallback::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SolutionCallback");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSolution_f3368328259a5468] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_isSolutionOptimal_e470b6d9e0d979db] = env->getMethodID(cls, "isSolutionOptimal", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolutionCallback::SolutionCallback() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::optim::PointValuePair SolutionCallback::getSolution() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getSolution_f3368328259a5468]));
        }

        jboolean SolutionCallback::isSolutionOptimal() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSolutionOptimal_e470b6d9e0d979db]);
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
    namespace optim {
      namespace linear {
        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data);
        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data);
        static PyGetSetDef t_SolutionCallback__fields_[] = {
          DECLARE_GET_FIELD(t_SolutionCallback, solution),
          DECLARE_GET_FIELD(t_SolutionCallback, solutionOptimal),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolutionCallback__methods_[] = {
          DECLARE_METHOD(t_SolutionCallback, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, getSolution, METH_NOARGS),
          DECLARE_METHOD(t_SolutionCallback, isSolutionOptimal, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolutionCallback)[] = {
          { Py_tp_methods, t_SolutionCallback__methods_ },
          { Py_tp_init, (void *) t_SolutionCallback_init_ },
          { Py_tp_getset, t_SolutionCallback__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolutionCallback)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolutionCallback, t_SolutionCallback, SolutionCallback);

        void t_SolutionCallback::install(PyObject *module)
        {
          installType(&PY_TYPE(SolutionCallback), &PY_TYPE_DEF(SolutionCallback), module, "SolutionCallback", 0);
        }

        void t_SolutionCallback::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "class_", make_descriptor(SolutionCallback::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "wrapfn_", make_descriptor(t_SolutionCallback::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolutionCallback::initializeClass, 1)))
            return NULL;
          return t_SolutionCallback::wrap_Object(SolutionCallback(((t_SolutionCallback *) arg)->object.this$));
        }
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolutionCallback::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds)
        {
          SolutionCallback object((jobject) NULL);

          INT_CALL(object = SolutionCallback());
          self->object = object;

          return 0;
        }

        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data)
        {
          ::org::hipparchus::optim::PointValuePair value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(value);
        }

        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldDecompositionSolver::class$ = NULL;
      jmethodID *FieldDecompositionSolver::mids$ = NULL;
      bool FieldDecompositionSolver::live$ = false;

      jclass FieldDecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldDecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_cc77900a647586cf] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_e470b6d9e0d979db] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_311c21c57522a65c] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_solve_585261c47f8bb8c7] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint FieldDecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_cc77900a647586cf]));
      }

      jint FieldDecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      jboolean FieldDecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_solve_311c21c57522a65c], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_solve_585261c47f8bb8c7], a0.this$));
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
      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data);
      static PyGetSetDef t_FieldDecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, rowDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_FieldDecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDecompositionSolver)[] = {
        { Py_tp_methods, t_FieldDecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldDecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDecompositionSolver, t_FieldDecompositionSolver, FieldDecompositionSolver);
      PyObject *t_FieldDecompositionSolver::wrap_Object(const FieldDecompositionSolver& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDecompositionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDecompositionSolver), &PY_TYPE_DEF(FieldDecompositionSolver), module, "FieldDecompositionSolver", 0);
      }

      void t_FieldDecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "class_", make_descriptor(FieldDecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "wrapfn_", make_descriptor(t_FieldDecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_FieldDecompositionSolver::wrap_Object(FieldDecompositionSolver(((t_FieldDecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *InterpolationTableLoader::class$ = NULL;
      jmethodID *InterpolationTableLoader::mids$ = NULL;
      bool InterpolationTableLoader::live$ = false;

      jclass InterpolationTableLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/InterpolationTableLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getAbscissaGrid_7cdc325af0834901] = env->getMethodID(cls, "getAbscissaGrid", "()[D");
          mids$[mid_getOrdinateGrid_7cdc325af0834901] = env->getMethodID(cls, "getOrdinateGrid", "()[D");
          mids$[mid_getValuesSamples_43de1192439efa92] = env->getMethodID(cls, "getValuesSamples", "()[[D");
          mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolationTableLoader::InterpolationTableLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      JArray< jdouble > InterpolationTableLoader::getAbscissaGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAbscissaGrid_7cdc325af0834901]));
      }

      JArray< jdouble > InterpolationTableLoader::getOrdinateGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getOrdinateGrid_7cdc325af0834901]));
      }

      JArray< JArray< jdouble > > InterpolationTableLoader::getValuesSamples() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getValuesSamples_43de1192439efa92]));
      }

      void InterpolationTableLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
      }

      jboolean InterpolationTableLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args);
      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data);
      static PyGetSetDef t_InterpolationTableLoader__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolationTableLoader, abscissaGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, ordinateGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, valuesSamples),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolationTableLoader__methods_[] = {
        DECLARE_METHOD(t_InterpolationTableLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, getAbscissaGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getOrdinateGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getValuesSamples, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolationTableLoader)[] = {
        { Py_tp_methods, t_InterpolationTableLoader__methods_ },
        { Py_tp_init, (void *) t_InterpolationTableLoader_init_ },
        { Py_tp_getset, t_InterpolationTableLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolationTableLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolationTableLoader, t_InterpolationTableLoader, InterpolationTableLoader);

      void t_InterpolationTableLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolationTableLoader), &PY_TYPE_DEF(InterpolationTableLoader), module, "InterpolationTableLoader", 0);
      }

      void t_InterpolationTableLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "class_", make_descriptor(InterpolationTableLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "wrapfn_", make_descriptor(t_InterpolationTableLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolationTableLoader::initializeClass, 1)))
          return NULL;
        return t_InterpolationTableLoader::wrap_Object(InterpolationTableLoader(((t_InterpolationTableLoader *) arg)->object.this$));
      }
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolationTableLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds)
      {
        InterpolationTableLoader object((jobject) NULL);

        INT_CALL(object = InterpolationTableLoader());
        self->object = object;

        return 0;
      }

      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbscissaGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrdinateGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValuesSamples());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbscissaGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrdinateGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValuesSamples());
        return JArray<jobject>(value.this$).wrap(NULL);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonOrekitStepInterpolator::mids$ = NULL;
        bool PythonOrekitStepInterpolator::live$ = false;

        jclass PythonOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_889031abe87f3b14] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPreviousState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_da619a9456840a3b] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepInterpolator::PythonOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonOrekitStepInterpolator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace sampling {
        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self);
        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepInterpolator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepInterpolator, t_PythonOrekitStepInterpolator, PythonOrekitStepInterpolator);

        void t_PythonOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepInterpolator), &PY_TYPE_DEF(PythonOrekitStepInterpolator), module, "PythonOrekitStepInterpolator", 1);
        }

        void t_PythonOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "class_", make_descriptor(PythonOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonOrekitStepInterpolator_getPreviousState2 },
            { "isCurrentStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3 },
            { "isForward", "()Z", (void *) t_PythonOrekitStepInterpolator_isForward4 },
            { "isPreviousStateInterpolated", "()Z", (void *) t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepInterpolator_pythonDecRef6 },
            { "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;", (void *) t_PythonOrekitStepInterpolator_restrictStep7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepInterpolator::wrap_Object(PythonOrekitStepInterpolator(((t_PythonOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepInterpolator_init_(t_PythonOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepInterpolator_finalize(t_PythonOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepInterpolator_pythonExtension(t_PythonOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isCurrentStateInterpolated3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isCurrentStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isCurrentStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isForward4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static jboolean JNICALL t_PythonOrekitStepInterpolator_isPreviousStateInterpolated5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isPreviousStateInterpolated", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isPreviousStateInterpolated", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonOrekitStepInterpolator_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonOrekitStepInterpolator_restrictStep7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepInterpolator::mids$[PythonOrekitStepInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonOrekitStepInterpolator_get__self(t_PythonOrekitStepInterpolator *self, void *data)
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
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateFunction::class$ = NULL;
      jmethodID *FieldUnivariateFunction::mids$ = NULL;
      bool FieldUnivariateFunction::live$ = false;

      jclass FieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateFunction_3983b9ee91ea635c] = env->getMethodID(cls, "toCalculusFieldUnivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");
          mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateFunction::toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateFunction_3983b9ee91ea635c], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, toCalculusFieldUnivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateFunction, t_FieldUnivariateFunction, FieldUnivariateFunction);

      void t_FieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateFunction), &PY_TYPE_DEF(FieldUnivariateFunction), module, "FieldUnivariateFunction", 0);
      }

      void t_FieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "class_", make_descriptor(FieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "wrapfn_", make_descriptor(t_FieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateFunction::wrap_Object(FieldUnivariateFunction(((t_FieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *PythonAbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *PythonAbstractGNSSAttitudeProvider::mids$ = NULL;
        bool PythonAbstractGNSSAttitudeProvider::live$ = false;

        jclass PythonAbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65fb710ff0be7da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGNSSAttitudeProvider::PythonAbstractGNSSAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_65fb710ff0be7da1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractGNSSAttitudeProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractGNSSAttitudeProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractGNSSAttitudeProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace attitude {
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args);
        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data);
        static PyGetSetDef t_PythonAbstractGNSSAttitudeProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGNSSAttitudeProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractGNSSAttitudeProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_PythonAbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGNSSAttitudeProvider_init_ },
          { Py_tp_getset, t_PythonAbstractGNSSAttitudeProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGNSSAttitudeProvider, t_PythonAbstractGNSSAttitudeProvider, PythonAbstractGNSSAttitudeProvider);

        void t_PythonAbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGNSSAttitudeProvider), &PY_TYPE_DEF(PythonAbstractGNSSAttitudeProvider), module, "PythonAbstractGNSSAttitudeProvider", 1);
        }

        void t_PythonAbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "class_", make_descriptor(PythonAbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractGNSSAttitudeProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGNSSAttitudeProvider::wrap_Object(PythonAbstractGNSSAttitudeProvider(((t_PythonAbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGNSSAttitudeProvider_init_(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          PythonAbstractGNSSAttitudeProvider object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractGNSSAttitudeProvider(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_finalize(t_PythonAbstractGNSSAttitudeProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_pythonExtension(t_PythonAbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractGNSSAttitudeProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractGNSSAttitudeProvider::mids$[PythonAbstractGNSSAttitudeProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractGNSSAttitudeProvider_get__self(t_PythonAbstractGNSSAttitudeProvider *self, void *data)
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
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseOptimizer::class$ = NULL;
      jmethodID *BaseOptimizer::mids$ = NULL;
      bool BaseOptimizer::live$ = false;

      jclass BaseOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_100e81b1c0752b49] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getMaxIterations_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_optimize_dfd7647d9110ac9f] = env->getMethodID(cls, "optimize", "()Ljava/lang/Object;");
          mids$[mid_optimize_2543bc354d0aa7ca] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_dfd7647d9110ac9f] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
          mids$[mid_incrementEvaluationCount_7ae3461a92a43152] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
          mids$[mid_incrementIterationCount_7ae3461a92a43152] = env->getMethodID(cls, "incrementIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker BaseOptimizer::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_100e81b1c0752b49]));
      }

      jint BaseOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      jint BaseOptimizer::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
      }

      jint BaseOptimizer::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
      }

      jint BaseOptimizer::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_f2f64475e4580546]);
      }

      ::java::lang::Object BaseOptimizer::optimize() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_dfd7647d9110ac9f]));
      }

      ::java::lang::Object BaseOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_2543bc354d0aa7ca], a0.this$));
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
      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data);
      static PyGetSetDef t_BaseOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseOptimizer, convergenceChecker),
        DECLARE_GET_FIELD(t_BaseOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, iterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxEvaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxIterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseOptimizer, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseOptimizer)[] = {
        { Py_tp_methods, t_BaseOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseOptimizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseOptimizer, t_BaseOptimizer, BaseOptimizer);
      PyObject *t_BaseOptimizer::wrap_Object(const BaseOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseOptimizer), &PY_TYPE_DEF(BaseOptimizer), module, "BaseOptimizer", 0);
      }

      void t_BaseOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "class_", make_descriptor(BaseOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "wrapfn_", make_descriptor(t_BaseOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseOptimizer::wrap_Object(BaseOptimizer(((t_BaseOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::Object result((jobject) NULL);
            OBJ_CALL(result = self->object.optimize());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
          break;
         case 1:
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "optimize", args);
        return NULL;
      }
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSTransform::class$ = NULL;
        jmethodID *LOSTransform::mids$ = NULL;
        bool LOSTransform::live$ = false;

        jclass LOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_074444dab4c2f526] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_c7e6a6851bf74340] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream LOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_074444dab4c2f526], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_c7e6a6851bf74340], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self);
        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args);
        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data);
        static PyGetSetDef t_LOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_LOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LOSTransform__methods_[] = {
          DECLARE_METHOD(t_LOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSTransform)[] = {
          { Py_tp_methods, t_LOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSTransform, t_LOSTransform, LOSTransform);

        void t_LOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSTransform), &PY_TYPE_DEF(LOSTransform), module, "LOSTransform", 0);
        }

        void t_LOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "class_", make_descriptor(LOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "wrapfn_", make_descriptor(t_LOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSTransform::initializeClass, 1)))
            return NULL;
          return t_LOSTransform::wrap_Object(LOSTransform(((t_LOSTransform *) arg)->object.this$));
        }
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorBuilder::class$ = NULL;
        jmethodID *PythonAbstractPropagatorBuilder::mids$ = NULL;
        bool PythonAbstractPropagatorBuilder::live$ = false;

        jclass PythonAbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_43cbb53e6718eeb2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DZ)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_6e20699935a1c88e] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorBuilder::PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, jboolean a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_43cbb53e6718eeb2, a0.this$, a1.this$, a2, a3)) {}

        void PythonAbstractPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractPropagatorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace conversion {
        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self);
        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorBuilder, t_PythonAbstractPropagatorBuilder, PythonAbstractPropagatorBuilder);

        void t_PythonAbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorBuilder), &PY_TYPE_DEF(PythonAbstractPropagatorBuilder), module, "PythonAbstractPropagatorBuilder", 1);
        }

        void t_PythonAbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "class_", make_descriptor(PythonAbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonAbstractPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonAbstractPropagatorBuilder_copy2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorBuilder_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorBuilder::wrap_Object(PythonAbstractPropagatorBuilder(((t_PythonAbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jboolean a3;
          PythonAbstractPropagatorBuilder object((jobject) NULL);

          if (!parseArgs(args, "kKDZ", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocity::class$ = NULL;
              jmethodID *AngularVelocity::mids$ = NULL;
              bool AngularVelocity::live$ = false;

              jclass AngularVelocity::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAngVelX_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngVelX", "()D");
                  mids$[mid_getAngVelY_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngVelY", "()D");
                  mids$[mid_getAngVelZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngVelZ", "()D");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setAngVelX_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAngVelX", "(D)V");
                  mids$[mid_setAngVelY_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAngVelY", "(D)V");
                  mids$[mid_setAngVelZ_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAngVelZ", "(D)V");
                  mids$[mid_setFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AngularVelocity::AngularVelocity() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble AngularVelocity::getAngVelX() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelX_456d9a2f64d6b28d]);
              }

              jdouble AngularVelocity::getAngVelY() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelY_456d9a2f64d6b28d]);
              }

              jdouble AngularVelocity::getAngVelZ() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelZ_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AngularVelocity::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AngularVelocity::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_aa70fdb14ae9305f]));
              }

              void AngularVelocity::setAngVelX(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelX_77e0f9a1f260e2e5], a0);
              }

              void AngularVelocity::setAngVelY(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelY_77e0f9a1f260e2e5], a0);
              }

              void AngularVelocity::setAngVelZ(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelZ_77e0f9a1f260e2e5], a0);
              }

              void AngularVelocity::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AngularVelocity::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self);
              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg);
              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args);
              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data);
              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data);
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data);
              static PyGetSetDef t_AngularVelocity__fields_[] = {
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelX),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelY),
                DECLARE_GETSET_FIELD(t_AngularVelocity, angVelZ),
                DECLARE_GET_FIELD(t_AngularVelocity, endpoints),
                DECLARE_GETSET_FIELD(t_AngularVelocity, frame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocity__methods_[] = {
                DECLARE_METHOD(t_AngularVelocity, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelX, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelY, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getAngVelZ, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_AngularVelocity, setAngVelX, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelY, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setAngVelZ, METH_O),
                DECLARE_METHOD(t_AngularVelocity, setFrame, METH_O),
                DECLARE_METHOD(t_AngularVelocity, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocity)[] = {
                { Py_tp_methods, t_AngularVelocity__methods_ },
                { Py_tp_init, (void *) t_AngularVelocity_init_ },
                { Py_tp_getset, t_AngularVelocity__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocity)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AngularVelocity, t_AngularVelocity, AngularVelocity);

              void t_AngularVelocity::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocity), &PY_TYPE_DEF(AngularVelocity), module, "AngularVelocity", 0);
              }

              void t_AngularVelocity::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "class_", make_descriptor(AngularVelocity::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "wrapfn_", make_descriptor(t_AngularVelocity::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocity), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AngularVelocity_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocity::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocity::wrap_Object(AngularVelocity(((t_AngularVelocity *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocity_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocity::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AngularVelocity_init_(t_AngularVelocity *self, PyObject *args, PyObject *kwds)
              {
                AngularVelocity object((jobject) NULL);

                INT_CALL(object = AngularVelocity());
                self->object = object;

                return 0;
              }

              static PyObject *t_AngularVelocity_getAngVelX(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelX());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelY(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelY());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getAngVelZ(t_AngularVelocity *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AngularVelocity_getEndpoints(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_getFrame(t_AngularVelocity *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AngularVelocity_setAngVelX(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelX(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelX", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelY(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelY(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelY", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setAngVelZ(t_AngularVelocity *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAngVelZ(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngVelZ", arg);
                return NULL;
              }

              static PyObject *t_AngularVelocity_setFrame(t_AngularVelocity *self, PyObject *arg)
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

              static PyObject *t_AngularVelocity_validate(t_AngularVelocity *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AngularVelocity), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AngularVelocity_get__angVelX(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelX());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelX(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelX(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelX", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelY(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelY());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelY(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelY(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelY", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__angVelZ(t_AngularVelocity *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAngVelZ());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AngularVelocity_set__angVelZ(t_AngularVelocity *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAngVelZ(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angVelZ", arg);
                return -1;
              }

              static PyObject *t_AngularVelocity_get__endpoints(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AngularVelocity_get__frame(t_AngularVelocity *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AngularVelocity_set__frame(t_AngularVelocity *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmHeader::class$ = NULL;
            jmethodID *TdmHeader::mids$ = NULL;
            bool TdmHeader::live$ = false;

            jclass TdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmHeader::TdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
          namespace tdm {
            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_TdmHeader__methods_[] = {
              DECLARE_METHOD(t_TdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmHeader)[] = {
              { Py_tp_methods, t_TdmHeader__methods_ },
              { Py_tp_init, (void *) t_TdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(TdmHeader, t_TdmHeader, TdmHeader);

            void t_TdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmHeader), &PY_TYPE_DEF(TdmHeader), module, "TdmHeader", 0);
            }

            void t_TdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "class_", make_descriptor(TdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "wrapfn_", make_descriptor(t_TdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmHeader::initializeClass, 1)))
                return NULL;
              return t_TdmHeader::wrap_Object(TdmHeader(((t_TdmHeader *) arg)->object.this$));
            }
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds)
            {
              TdmHeader object((jobject) NULL);

              INT_CALL(object = TdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion::class$ = NULL;
      jmethodID *ITRFVersion::mids$ = NULL;
      bool ITRFVersion::live$ = false;
      ITRFVersion *ITRFVersion::ITRF_1988 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1989 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1990 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1991 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1992 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1993 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1994 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1996 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1997 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2000 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2005 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2008 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2014 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2020 = NULL;

      jclass ITRFVersion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_a2a5dc504f064274] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getConverter_6fd5aeb2f940da50] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getITRFVersion_865e110b55770974] = env->getStaticMethodID(cls, "getITRFVersion", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getITRFVersion_3b8078a2775f5351] = env->getStaticMethodID(cls, "getITRFVersion", "(I)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLast_f157e1cf87d45e2d] = env->getStaticMethodID(cls, "getLast", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getYear_f2f64475e4580546] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_valueOf_865e110b55770974] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_values_143fcc92fa54b7e5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_1988 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1988", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1989 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1989", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1990 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1990", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1991 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1991", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1992 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1992", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1993 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1993", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1994 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1994", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1996 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1996", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1997 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1997", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2000 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2000", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2005 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2005", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2008 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2008", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2014 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2014", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2020 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2020", "Lorg/orekit/frames/ITRFVersion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_a2a5dc504f064274], a0.this$, a1.this$));
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_6fd5aeb2f940da50], a0.this$, a1.this$, a2.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_865e110b55770974], a0.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_3b8078a2775f5351], a0));
      }

      ITRFVersion ITRFVersion::getLast()
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getLast_f157e1cf87d45e2d]));
      }

      ::java::lang::String ITRFVersion::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jint ITRFVersion::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_f2f64475e4580546]);
      }

      ITRFVersion ITRFVersion::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_valueOf_865e110b55770974], a0.this$));
      }

      JArray< ITRFVersion > ITRFVersion::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ITRFVersion >(env->callStaticObjectMethod(cls, mids$[mid_values_143fcc92fa54b7e5]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args);
      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type);
      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_values(PyTypeObject *type);
      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data);
      static PyGetSetDef t_ITRFVersion__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion, last),
        DECLARE_GET_FIELD(t_ITRFVersion, name),
        DECLARE_GET_FIELD(t_ITRFVersion, year),
        DECLARE_GET_FIELD(t_ITRFVersion, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion, getConverter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getITRFVersion, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getLast, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getName, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, getYear, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion)[] = {
        { Py_tp_methods, t_ITRFVersion__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ITRFVersion, t_ITRFVersion, ITRFVersion);
      PyObject *t_ITRFVersion::wrap_Object(const ITRFVersion& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion), &PY_TYPE_DEF(ITRFVersion), module, "ITRFVersion", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "Converter", make_descriptor(&PY_TYPE_DEF(ITRFVersion$Converter)));
      }

      void t_ITRFVersion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "class_", make_descriptor(ITRFVersion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "wrapfn_", make_descriptor(t_ITRFVersion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1988", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1989", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1990", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1991", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1992", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1993", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1994", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1996", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1997", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2000", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2005", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2008", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2014", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2014)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2020", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2020)));
      }

      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion::wrap_Object(ITRFVersion(((t_ITRFVersion *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KK", ITRFVersion::initializeClass, ITRFVersion::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KKk", ITRFVersion::initializeClass, ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1, a2));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getConverter", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
          {
            jint a0;
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRFVersion", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type)
      {
        ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getLast());
        return t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ITRFVersion result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::valueOf(a0));
          return t_ITRFVersion::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ITRFVersion_values(PyTypeObject *type)
      {
        JArray< ITRFVersion > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::values());
        return JArray<jobject>(result.this$).wrap(t_ITRFVersion::wrap_jobject);
      }
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data)
      {
        ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getLast());
        return t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolution::class$ = NULL;
          jmethodID *IntegerLeastSquareSolution::mids$ = NULL;
          bool IntegerLeastSquareSolution::live$ = false;

          jclass IntegerLeastSquareSolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bdab183810389f33] = env->getMethodID(cls, "<init>", "([JD)V");
              mids$[mid_getSolution_ed5efc80f5d5aa6e] = env->getMethodID(cls, "getSolution", "()[J");
              mids$[mid_getSquaredDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getSquaredDistance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareSolution::IntegerLeastSquareSolution(const JArray< jlong > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdab183810389f33, a0.this$, a1)) {}

          JArray< jlong > IntegerLeastSquareSolution::getSolution() const
          {
            return JArray< jlong >(env->callObjectMethod(this$, mids$[mid_getSolution_ed5efc80f5d5aa6e]));
          }

          jdouble IntegerLeastSquareSolution::getSquaredDistance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSquaredDistance_456d9a2f64d6b28d]);
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
          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self);
          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data);
          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data);
          static PyGetSetDef t_IntegerLeastSquareSolution__fields_[] = {
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, solution),
            DECLARE_GET_FIELD(t_IntegerLeastSquareSolution, squaredDistance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntegerLeastSquareSolution__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSolution, METH_NOARGS),
            DECLARE_METHOD(t_IntegerLeastSquareSolution, getSquaredDistance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolution)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolution__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareSolution_init_ },
            { Py_tp_getset, t_IntegerLeastSquareSolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolution, t_IntegerLeastSquareSolution, IntegerLeastSquareSolution);

          void t_IntegerLeastSquareSolution::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolution), &PY_TYPE_DEF(IntegerLeastSquareSolution), module, "IntegerLeastSquareSolution", 0);
          }

          void t_IntegerLeastSquareSolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "class_", make_descriptor(IntegerLeastSquareSolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolution::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolution::wrap_Object(IntegerLeastSquareSolution(((t_IntegerLeastSquareSolution *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareSolution_init_(t_IntegerLeastSquareSolution *self, PyObject *args, PyObject *kwds)
          {
            JArray< jlong > a0((jobject) NULL);
            jdouble a1;
            IntegerLeastSquareSolution object((jobject) NULL);

            if (!parseArgs(args, "[JD", &a0, &a1))
            {
              INT_CALL(object = IntegerLeastSquareSolution(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IntegerLeastSquareSolution_getSolution(t_IntegerLeastSquareSolution *self)
          {
            JArray< jlong > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSolution());
            return result.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_getSquaredDistance(t_IntegerLeastSquareSolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntegerLeastSquareSolution_get__solution(t_IntegerLeastSquareSolution *self, void *data)
          {
            JArray< jlong > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSolution());
            return value.wrap();
          }

          static PyObject *t_IntegerLeastSquareSolution_get__squaredDistance(t_IntegerLeastSquareSolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSquaredDistance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProviderUtils::class$ = NULL;
      jmethodID *TransformProviderUtils::mids$ = NULL;
      bool TransformProviderUtils::live$ = false;
      ::org::orekit::frames::TransformProvider *TransformProviderUtils::IDENTITY_PROVIDER = NULL;

      jclass TransformProviderUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProviderUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCombinedProvider_e0b7f72f5ec516d6] = env->getStaticMethodID(cls, "getCombinedProvider", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getReversedProvider_ab0209f62a277966] = env->getStaticMethodID(cls, "getReversedProvider", "(Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY_PROVIDER = new ::org::orekit::frames::TransformProvider(env->getStaticObjectField(cls, "IDENTITY_PROVIDER", "Lorg/orekit/frames/TransformProvider;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getCombinedProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::frames::TransformProvider & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getCombinedProvider_e0b7f72f5ec516d6], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getReversedProvider(const ::org::orekit::frames::TransformProvider & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getReversedProvider_ab0209f62a277966], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args);
      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_TransformProviderUtils__methods_[] = {
        DECLARE_METHOD(t_TransformProviderUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getCombinedProvider, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getReversedProvider, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProviderUtils)[] = {
        { Py_tp_methods, t_TransformProviderUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProviderUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformProviderUtils, t_TransformProviderUtils, TransformProviderUtils);

      void t_TransformProviderUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProviderUtils), &PY_TYPE_DEF(TransformProviderUtils), module, "TransformProviderUtils", 0);
      }

      void t_TransformProviderUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "class_", make_descriptor(TransformProviderUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "wrapfn_", make_descriptor(t_TransformProviderUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(TransformProviderUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "IDENTITY_PROVIDER", make_descriptor(::org::orekit::frames::t_TransformProvider::wrap_Object(*TransformProviderUtils::IDENTITY_PROVIDER)));
      }

      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProviderUtils::initializeClass, 1)))
          return NULL;
        return t_TransformProviderUtils::wrap_Object(TransformProviderUtils(((t_TransformProviderUtils *) arg)->object.this$));
      }
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProviderUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getCombinedProvider(a0, a1));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCombinedProvider", args);
        return NULL;
      }

      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::TransformProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getReversedProvider(a0));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReversedProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *IOException::class$ = NULL;
    jmethodID *IOException::mids$ = NULL;
    bool IOException::live$ = false;

    jclass IOException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/IOException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IOException::IOException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    IOException::IOException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    IOException::IOException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    IOException::IOException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IOException__methods_[] = {
      DECLARE_METHOD(t_IOException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IOException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IOException)[] = {
      { Py_tp_methods, t_IOException__methods_ },
      { Py_tp_init, (void *) t_IOException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IOException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(IOException, t_IOException, IOException);

    void t_IOException::install(PyObject *module)
    {
      installType(&PY_TYPE(IOException), &PY_TYPE_DEF(IOException), module, "IOException", 0);
    }

    void t_IOException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "class_", make_descriptor(IOException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "wrapfn_", make_descriptor(t_IOException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IOException::initializeClass, 1)))
        return NULL;
      return t_IOException::wrap_Object(IOException(((t_IOException *) arg)->object.this$));
    }
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IOException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IOException object((jobject) NULL);

          INT_CALL(object = IOException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IOException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GeographicZoneDetector::class$ = NULL;
        jmethodID *GeographicZoneDetector::mids$ = NULL;
        bool GeographicZoneDetector::live$ = false;

        jclass GeographicZoneDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GeographicZoneDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f8cca398652dcac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_943820d6b2353729] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_883d26889ee03ca8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getZone_b554ba4417ec0cb0] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_withMargin_5f50bae2d0bd9755] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/GeographicZoneDetector;");
            mids$[mid_create_b47647f22aa8e7cc] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GeographicZoneDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeographicZoneDetector::GeographicZoneDetector(const ::org::orekit::bodies::BodyShape & a0, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3f8cca398652dcac, a0.this$, a1.this$, a2)) {}

        GeographicZoneDetector::GeographicZoneDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_943820d6b2353729, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble GeographicZoneDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::BodyShape GeographicZoneDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_883d26889ee03ca8]));
        }

        jdouble GeographicZoneDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet GeographicZoneDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_b554ba4417ec0cb0]));
        }

        GeographicZoneDetector GeographicZoneDetector::withMargin(jdouble a0) const
        {
          return GeographicZoneDetector(env->callObjectMethod(this$, mids$[mid_withMargin_5f50bae2d0bd9755], a0));
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
      namespace events {
        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args);
        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args);
        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data);
        static PyGetSetDef t_GeographicZoneDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GeographicZoneDetector, body),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, margin),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, zone),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeographicZoneDetector__methods_[] = {
          DECLARE_METHOD(t_GeographicZoneDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getZone, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, withMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeographicZoneDetector)[] = {
          { Py_tp_methods, t_GeographicZoneDetector__methods_ },
          { Py_tp_init, (void *) t_GeographicZoneDetector_init_ },
          { Py_tp_getset, t_GeographicZoneDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeographicZoneDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GeographicZoneDetector, t_GeographicZoneDetector, GeographicZoneDetector);
        PyObject *t_GeographicZoneDetector::wrap_Object(const GeographicZoneDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeographicZoneDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeographicZoneDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GeographicZoneDetector), &PY_TYPE_DEF(GeographicZoneDetector), module, "GeographicZoneDetector", 0);
        }

        void t_GeographicZoneDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "class_", make_descriptor(GeographicZoneDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "wrapfn_", make_descriptor(t_GeographicZoneDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeographicZoneDetector::initializeClass, 1)))
            return NULL;
          return t_GeographicZoneDetector::wrap_Object(GeographicZoneDetector(((t_GeographicZoneDetector *) arg)->object.this$));
        }
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeographicZoneDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::bodies::BodyShape a0((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a2))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a4))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
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

        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeographicZoneDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg)
        {
          jdouble a0;
          GeographicZoneDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_GeographicZoneDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesPhase::class$ = NULL;
          jmethodID *InterSatellitesPhase::mids$ = NULL;
          bool InterSatellitesPhase::live$ = false;
          ::java::lang::String *InterSatellitesPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *InterSatellitesPhase::MEASUREMENT_TYPE = NULL;

          jclass InterSatellitesPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a035fb2cbf097a51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/time/AbsoluteDate;DDDD)V");
              mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhase::InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a035fb2cbf097a51, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::utils::ParameterDriver InterSatellitesPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_ac0e5f8f2fa86f4f]));
          }

          jdouble InterSatellitesPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_456d9a2f64d6b28d]);
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
          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args);
          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data);
          static PyGetSetDef t_InterSatellitesPhase__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, wavelength),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhase__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhase)[] = {
            { Py_tp_methods, t_InterSatellitesPhase__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhase_init_ },
            { Py_tp_getset, t_InterSatellitesPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhase, t_InterSatellitesPhase, InterSatellitesPhase);
          PyObject *t_InterSatellitesPhase::wrap_Object(const InterSatellitesPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhase), &PY_TYPE_DEF(InterSatellitesPhase), module, "InterSatellitesPhase", 0);
          }

          void t_InterSatellitesPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "class_", make_descriptor(InterSatellitesPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "wrapfn_", make_descriptor(t_InterSatellitesPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(InterSatellitesPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*InterSatellitesPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhase::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhase::wrap_Object(InterSatellitesPhase(((t_InterSatellitesPhase *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            InterSatellitesPhase object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = InterSatellitesPhase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultIterativeLinearSolverEvent::class$ = NULL;
      jmethodID *DefaultIterativeLinearSolverEvent::mids$ = NULL;
      bool DefaultIterativeLinearSolverEvent::live$ = false;

      jclass DefaultIterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultIterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8136b59ab37b1279] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_init$_9dd624dab97a29fd] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;ILorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;D)V");
          mids$[mid_getNormOfResidual_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_6d9adf1d5b463928] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_6d9adf1d5b463928] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_6d9adf1d5b463928] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_e470b6d9e0d979db] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_8136b59ab37b1279, a0.this$, a1, a2.this$, a3.this$, a4)) {}

      DefaultIterativeLinearSolverEvent::DefaultIterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3, const ::org::hipparchus::linear::RealVector & a4, jdouble a5) : ::org::hipparchus::linear::IterativeLinearSolverEvent(env->newObject(initializeClass, &mids$, mid_init$_9dd624dab97a29fd, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5)) {}

      jdouble DefaultIterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector DefaultIterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_6d9adf1d5b463928]));
      }

      jboolean DefaultIterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_e470b6d9e0d979db]);
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
      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_DefaultIterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_DefaultIterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultIterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getNormOfResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getResidual, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getRightHandSideVector, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, getSolution, METH_VARARGS),
        DECLARE_METHOD(t_DefaultIterativeLinearSolverEvent, providesResidual, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultIterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_DefaultIterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_DefaultIterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_DefaultIterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultIterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolverEvent),
        NULL
      };

      DEFINE_TYPE(DefaultIterativeLinearSolverEvent, t_DefaultIterativeLinearSolverEvent, DefaultIterativeLinearSolverEvent);

      void t_DefaultIterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultIterativeLinearSolverEvent), &PY_TYPE_DEF(DefaultIterativeLinearSolverEvent), module, "DefaultIterativeLinearSolverEvent", 0);
      }

      void t_DefaultIterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "class_", make_descriptor(DefaultIterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_DefaultIterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultIterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_DefaultIterativeLinearSolverEvent::wrap_Object(DefaultIterativeLinearSolverEvent(((t_DefaultIterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_DefaultIterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultIterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultIterativeLinearSolverEvent_init_(t_DefaultIterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            jdouble a4;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::lang::Object a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector a4((jobject) NULL);
            jdouble a5;
            DefaultIterativeLinearSolverEvent object((jobject) NULL);

            if (!parseArgs(args, "oIkkkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DefaultIterativeLinearSolverEvent(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_DefaultIterativeLinearSolverEvent_getNormOfResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormOfResidual());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getNormOfResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getResidual());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getRightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRightHandSideVector());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getRightHandSideVector", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_getSolution(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "getSolution", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_providesResidual(t_DefaultIterativeLinearSolverEvent *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.providesResidual());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DefaultIterativeLinearSolverEvent), (PyObject *) self, "providesResidual", args, 2);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__normOfResidual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__residual(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__rightHandSideVector(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_DefaultIterativeLinearSolverEvent_get__solution(t_DefaultIterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadata::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadata::live$ = false;

              jclass AttitudeCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCovBasis_0090f7797e403f43] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_0090f7797e403f43] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovID_0090f7797e403f43] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovPrevID_0090f7797e403f43] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovType_10ff8ccfa18eb164] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_setCovBasis_e939c6558ae8d313] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_e939c6558ae8d313] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovID_e939c6558ae8d313] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovPrevID_e939c6558ae8d313] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovType_f40cd56ce69cda26] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistoryMetadata::AttitudeCovarianceHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_0090f7797e403f43]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_0090f7797e403f43]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_aa70fdb14ae9305f]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovType_10ff8ccfa18eb164]));
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_e939c6558ae8d313], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_e939c6558ae8d313], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_f40cd56ce69cda26], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace acm {
              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadata, t_AttitudeCovarianceHistoryMetadata, AttitudeCovarianceHistoryMetadata);

              void t_AttitudeCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadata), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata), module, "AttitudeCovarianceHistoryMetadata", 0);
              }

              void t_AttitudeCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "class_", make_descriptor(AttitudeCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadata::wrap_Object(AttitudeCovarianceHistoryMetadata(((t_AttitudeCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeCovarianceHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeCovarianceHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSegment::class$ = NULL;
              jmethodID *AemSegment::mids$ = NULL;
              bool AemSegment::live$ = false;

              jclass AemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_801dbf4f8a7c7cdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/ndm/adm/aem/AemData;)V");
                  mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSegment::AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_801dbf4f8a7c7cdd, a0.this$, a1.this$)) {}

              ::java::util::List AemSegment::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_a6156df500549a58]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AemSegment::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_05a2839e8fecde67]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c14c1c09874639c8]));
              }

              ::java::lang::String AemSegment::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
              }

              jint AemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
              }

              ::org::orekit::frames::Frame AemSegment::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
            namespace aem {
              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args);
              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self);
              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self);
              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self);
              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self);
              static PyObject *t_AemSegment_getStart(t_AemSegment *self);
              static PyObject *t_AemSegment_getStop(t_AemSegment *self);
              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data);
              static PyGetSetDef t_AemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_AemSegment, angularCoordinates),
                DECLARE_GET_FIELD(t_AemSegment, attitudeProvider),
                DECLARE_GET_FIELD(t_AemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_AemSegment, interpolationMethod),
                DECLARE_GET_FIELD(t_AemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_AemSegment, referenceFrame),
                DECLARE_GET_FIELD(t_AemSegment, start),
                DECLARE_GET_FIELD(t_AemSegment, stop),
                DECLARE_GET_FIELD(t_AemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSegment__methods_[] = {
                DECLARE_METHOD(t_AemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemSegment, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSegment)[] = {
                { Py_tp_methods, t_AemSegment__methods_ },
                { Py_tp_init, (void *) t_AemSegment_init_ },
                { Py_tp_getset, t_AemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(AemSegment, t_AemSegment, AemSegment);
              PyObject *t_AemSegment::wrap_Object(const AemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSegment), &PY_TYPE_DEF(AemSegment), module, "AemSegment", 0);
              }

              void t_AemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "class_", make_descriptor(AemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "wrapfn_", make_descriptor(t_AemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSegment::initializeClass, 1)))
                  return NULL;
                return t_AemSegment::wrap_Object(AemSegment(((t_AemSegment *) arg)->object.this$));
              }
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemData a1((jobject) NULL);
                AemSegment object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = AemSegment(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStart(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStop(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderKey::class$ = NULL;
            jmethodID *CdmHeaderKey::mids$ = NULL;
            bool CdmHeaderKey::live$ = false;
            CdmHeaderKey *CdmHeaderKey::CLASSIFICATION = NULL;
            CdmHeaderKey *CdmHeaderKey::MESSAGE_FOR = NULL;

            jclass CdmHeaderKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_7adab898f9141a10] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)Z");
                mids$[mid_valueOf_a54df87f83f2bcbe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");
                mids$[mid_values_03c9116c9e9e8c01] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CLASSIFICATION = new CdmHeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                MESSAGE_FOR = new CdmHeaderKey(env->getStaticObjectField(cls, "MESSAGE_FOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmHeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_7adab898f9141a10], a0.this$, a1.this$, a2.this$);
            }

            CdmHeaderKey CdmHeaderKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmHeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a54df87f83f2bcbe], a0.this$));
            }

            JArray< CdmHeaderKey > CdmHeaderKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmHeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_03c9116c9e9e8c01]));
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
          namespace cdm {
            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type);
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data);
            static PyGetSetDef t_CdmHeaderKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmHeaderKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeaderKey__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderKey)[] = {
              { Py_tp_methods, t_CdmHeaderKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmHeaderKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmHeaderKey, t_CdmHeaderKey, CdmHeaderKey);
            PyObject *t_CdmHeaderKey::wrap_Object(const CdmHeaderKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmHeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmHeaderKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderKey), &PY_TYPE_DEF(CdmHeaderKey), module, "CdmHeaderKey", 0);
            }

            void t_CdmHeaderKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "class_", make_descriptor(CdmHeaderKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "wrapfn_", make_descriptor(t_CdmHeaderKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmHeaderKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "CLASSIFICATION", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::CLASSIFICATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "MESSAGE_FOR", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::MESSAGE_FOR)));
            }

            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderKey::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderKey::wrap_Object(CdmHeaderKey(((t_CdmHeaderKey *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmHeaderKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::valueOf(a0));
                return t_CdmHeaderKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type)
            {
              JArray< CdmHeaderKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmHeaderKey::wrap_jobject);
            }
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexComment::class$ = NULL;
          jmethodID *RinexComment::mids$ = NULL;
          bool RinexComment::live$ = false;

          jclass RinexComment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexComment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_46ad99eaf34b9cef] = env->getMethodID(cls, "<init>", "(ILjava/lang/String;)V");
              mids$[mid_getLineNumber_f2f64475e4580546] = env->getMethodID(cls, "getLineNumber", "()I");
              mids$[mid_getText_0090f7797e403f43] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexComment::RinexComment(jint a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46ad99eaf34b9cef, a0, a1.this$)) {}

          jint RinexComment::getLineNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLineNumber_f2f64475e4580546]);
          }

          ::java::lang::String RinexComment::getText() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_0090f7797e403f43]));
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
      namespace rinex {
        namespace section {
          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self);
          static PyObject *t_RinexComment_getText(t_RinexComment *self);
          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data);
          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data);
          static PyGetSetDef t_RinexComment__fields_[] = {
            DECLARE_GET_FIELD(t_RinexComment, lineNumber),
            DECLARE_GET_FIELD(t_RinexComment, text),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexComment__methods_[] = {
            DECLARE_METHOD(t_RinexComment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, getLineNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexComment, getText, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexComment)[] = {
            { Py_tp_methods, t_RinexComment__methods_ },
            { Py_tp_init, (void *) t_RinexComment_init_ },
            { Py_tp_getset, t_RinexComment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexComment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexComment, t_RinexComment, RinexComment);

          void t_RinexComment::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexComment), &PY_TYPE_DEF(RinexComment), module, "RinexComment", 0);
          }

          void t_RinexComment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "class_", make_descriptor(RinexComment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "wrapfn_", make_descriptor(t_RinexComment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexComment::initializeClass, 1)))
              return NULL;
            return t_RinexComment::wrap_Object(RinexComment(((t_RinexComment *) arg)->object.this$));
          }
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexComment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            RinexComment object((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              INT_CALL(object = RinexComment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLineNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexComment_getText(t_RinexComment *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getText());
            return j2p(result);
          }

          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLineNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getText());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalProperties::class$ = NULL;
              jmethodID *AttitudePhysicalProperties::mids$ = NULL;
              bool AttitudePhysicalProperties::live$ = false;

              jclass AttitudePhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCenterOfPressure_17a952530a808943] = env->getMethodID(cls, "getCenterOfPressure", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getCenterOfPressureReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getCenterOfPressureReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getDragCoefficient_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDryMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInertiaReferenceFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getInertiaReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getWetMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setCenterOfPressure_a94622407b723689] = env->getMethodID(cls, "setCenterOfPressure", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setCenterOfPressureReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setCenterOfPressureReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setDragCoefficient_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDryMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInertiaReferenceFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setInertiaReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setWetMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setWetMass", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudePhysicalProperties::AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudePhysicalProperties::getCenterOfPressure() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterOfPressure_17a952530a808943]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getCenterOfPressureReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCenterOfPressureReferenceFrame_aa70fdb14ae9305f]));
              }

              jdouble AttitudePhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_456d9a2f64d6b28d]);
              }

              jdouble AttitudePhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::linear::RealMatrix AttitudePhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_7116bbecdd8ceb21]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getInertiaReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getInertiaReferenceFrame_aa70fdb14ae9305f]));
              }

              jdouble AttitudePhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_456d9a2f64d6b28d]);
              }

              void AttitudePhysicalProperties::setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressure_a94622407b723689], a0.this$);
              }

              void AttitudePhysicalProperties::setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressureReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AttitudePhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_77e0f9a1f260e2e5], a0);
              }

              void AttitudePhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_77e0f9a1f260e2e5], a0);
              }

              void AttitudePhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628], a0, a1, a2);
              }

              void AttitudePhysicalProperties::setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaReferenceFrame_a455f3ff24eb0b47], a0.this$);
              }

              void AttitudePhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_77e0f9a1f260e2e5], a0);
              }

              void AttitudePhysicalProperties::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace acm {
              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudePhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressure),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressureReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_AttitudePhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, inertiaReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressure, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressureReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressure, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressureReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setWetMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalProperties)[] = {
                { Py_tp_methods, t_AttitudePhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_AttitudePhysicalProperties_init_ },
                { Py_tp_getset, t_AttitudePhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalProperties, t_AttitudePhysicalProperties, AttitudePhysicalProperties);

              void t_AttitudePhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalProperties), &PY_TYPE_DEF(AttitudePhysicalProperties), module, "AttitudePhysicalProperties", 0);
              }

              void t_AttitudePhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "class_", make_descriptor(AttitudePhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "wrapfn_", make_descriptor(t_AttitudePhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalProperties::wrap_Object(AttitudePhysicalProperties(((t_AttitudePhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                AttitudePhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = AttitudePhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressure(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressure", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressureReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressureReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args)
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

              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInertiaReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudePhysicalProperties), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressure(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressure", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressureReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressureReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInertiaReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inertiaReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunction::class$ = NULL;
          jmethodID *ObjectiveFunction::mids$ = NULL;
          bool ObjectiveFunction::live$ = false;

          jclass ObjectiveFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d8bbda6d54041bea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;)V");
              mids$[mid_getObjectiveFunction_600f605b8b5e0aac] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunction::ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8bbda6d54041bea, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateFunction ObjectiveFunction::getObjectiveFunction() const
          {
            return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_600f605b8b5e0aac]));
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
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self);
          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data);
          static PyGetSetDef t_ObjectiveFunction__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunction, objectiveFunction),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunction__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, getObjectiveFunction, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunction)[] = {
            { Py_tp_methods, t_ObjectiveFunction__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunction_init_ },
            { Py_tp_getset, t_ObjectiveFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunction, t_ObjectiveFunction, ObjectiveFunction);

          void t_ObjectiveFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunction), &PY_TYPE_DEF(ObjectiveFunction), module, "ObjectiveFunction", 0);
          }

          void t_ObjectiveFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "class_", make_descriptor(ObjectiveFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "wrapfn_", make_descriptor(t_ObjectiveFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunction::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunction::wrap_Object(ObjectiveFunction(((t_ObjectiveFunction *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ObjectiveFunction object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunction(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self)
          {
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *EstimatedTroposphericModel::class$ = NULL;
          jmethodID *EstimatedTroposphericModel::mids$ = NULL;
          bool EstimatedTroposphericModel::live$ = false;
          ::java::lang::String *EstimatedTroposphericModel::TOTAL_ZENITH_DELAY = NULL;

          jclass EstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/EstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e85e84d04ee812ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_init$_307e5370cf51797c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TOTAL_ZENITH_DELAY = new ::java::lang::String(env->getStaticObjectField(cls, "TOTAL_ZENITH_DELAY", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedTroposphericModel::EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e85e84d04ee812ca, a0.this$, a1)) {}

          EstimatedTroposphericModel::EstimatedTroposphericModel(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::MappingFunction & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_307e5370cf51797c, a0, a1, a2.this$, a3)) {}

          ::java::util::List EstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::CalculusFieldElement EstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble EstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self);
          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_EstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_EstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_EstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedTroposphericModel, t_EstimatedTroposphericModel, EstimatedTroposphericModel);

          void t_EstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedTroposphericModel), &PY_TYPE_DEF(EstimatedTroposphericModel), module, "EstimatedTroposphericModel", 0);
          }

          void t_EstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "class_", make_descriptor(EstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "wrapfn_", make_descriptor(t_EstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "TOTAL_ZENITH_DELAY", make_descriptor(j2p(*EstimatedTroposphericModel::TOTAL_ZENITH_DELAY)));
          }

          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedTroposphericModel::wrap_Object(EstimatedTroposphericModel(((t_EstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::models::earth::troposphere::MappingFunction a0((jobject) NULL);
                jdouble a1;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::MappingFunction a2((jobject) NULL);
                jdouble a3;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "DDkD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1, a2, a3));
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

          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/bodies/CR3BPFactory.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPFactory::class$ = NULL;
      jmethodID *CR3BPFactory::mids$ = NULL;
      bool CR3BPFactory::live$ = false;

      jclass CR3BPFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarthMoonCR3BP_fd816a5468a737d0] = env->getStaticMethodID(cls, "getEarthMoonCR3BP", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunEarthCR3BP_dbdc50d253d6fe8b] = env->getStaticMethodID(cls, "getSunEarthCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunJupiterCR3BP_dbdc50d253d6fe8b] = env->getStaticMethodID(cls, "getSunJupiterCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSystem_2c7bc2e848dd5e54] = env->getStaticMethodID(cls, "getSystem", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)Lorg/orekit/bodies/CR3BPSystem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getEarthMoonCR3BP()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonCR3BP_fd816a5468a737d0]));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunEarthCR3BP_dbdc50d253d6fe8b], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunJupiterCR3BP_dbdc50d253d6fe8b], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSystem_2c7bc2e848dd5e54], a0.this$, a1.this$, a2));
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
      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type);
      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data);
      static PyGetSetDef t_CR3BPFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPFactory, earthMoonCR3BP),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPFactory__methods_[] = {
        DECLARE_METHOD(t_CR3BPFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getEarthMoonCR3BP, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunEarthCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunJupiterCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPFactory)[] = {
        { Py_tp_methods, t_CR3BPFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CR3BPFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPFactory, t_CR3BPFactory, CR3BPFactory);

      void t_CR3BPFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPFactory), &PY_TYPE_DEF(CR3BPFactory), module, "CR3BPFactory", 0);
      }

      void t_CR3BPFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "class_", make_descriptor(CR3BPFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "wrapfn_", make_descriptor(t_CR3BPFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPFactory::initializeClass, 1)))
          return NULL;
        return t_CR3BPFactory::wrap_Object(CR3BPFactory(((t_CR3BPFactory *) arg)->object.this$));
      }
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunEarthCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunEarthCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunJupiterCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunJupiterCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        jdouble a2;
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSystem(a0, a1, a2));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSystem", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BurstSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BurstSelector::class$ = NULL;
      jmethodID *BurstSelector::mids$ = NULL;
      bool BurstSelector::live$ = false;

      jclass BurstSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BurstSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ce819118bc1e95e2] = env->getMethodID(cls, "<init>", "(IDDLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_b7149ea6787a6f3c] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BurstSelector::BurstSelector(jint a0, jdouble a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce819118bc1e95e2, a0, a1, a2, a3.this$)) {}

      ::java::util::List BurstSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_b7149ea6787a6f3c], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args);

      static PyMethodDef t_BurstSelector__methods_[] = {
        DECLARE_METHOD(t_BurstSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BurstSelector)[] = {
        { Py_tp_methods, t_BurstSelector__methods_ },
        { Py_tp_init, (void *) t_BurstSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BurstSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BurstSelector, t_BurstSelector, BurstSelector);

      void t_BurstSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(BurstSelector), &PY_TYPE_DEF(BurstSelector), module, "BurstSelector", 0);
      }

      void t_BurstSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "class_", make_descriptor(BurstSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "wrapfn_", make_descriptor(t_BurstSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BurstSelector::initializeClass, 1)))
          return NULL;
        return t_BurstSelector::wrap_Object(BurstSelector(((t_BurstSelector *) arg)->object.this$));
      }
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BurstSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::time::TimeScale a3((jobject) NULL);
        BurstSelector object((jobject) NULL);

        if (!parseArgs(args, "IDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = BurstSelector(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeType::class$ = NULL;
            jmethodID *AttitudeType::mids$ = NULL;
            bool AttitudeType::live$ = false;
            AttitudeType *AttitudeType::EULER_ANGLE = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_ANGVEL = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION = NULL;
            AttitudeType *AttitudeType::QUATERNION_ANGVEL = NULL;
            AttitudeType *AttitudeType::QUATERNION_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION_EULER_RATES = NULL;
            AttitudeType *AttitudeType::SPIN = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION_MOMENTUM = NULL;

            jclass AttitudeType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_18de2db1a9eda97f] = env->getMethodID(cls, "build", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/time/AbsoluteDate;[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_createDataFields_b2079b25eb3f7683] = env->getMethodID(cls, "createDataFields", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[Ljava/lang/String;");
                mids$[mid_generateData_749420dd471c293b] = env->getMethodID(cls, "generateData", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[D");
                mids$[mid_getAngularDerivativesFilter_c14c1c09874639c8] = env->getMethodID(cls, "getAngularDerivativesFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                mids$[mid_getName_085bbc49599fa163] = env->getMethodID(cls, "getName", "(D)Ljava/lang/String;");
                mids$[mid_parse_3cd12c8f31254686] = env->getMethodID(cls, "parse", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/files/ccsds/utils/ContextBinding;[Ljava/lang/String;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_parseType_c9429a38f03d36fe] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_c9429a38f03d36fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_values_a01160436a2e54b8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EULER_ANGLE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_EULER_RATES = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_EULER_RATES", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN = new AttitudeType(env->getStaticObjectField(cls, "SPIN", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION_MOMENTUM = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::build(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::time::AbsoluteDate & a4, const JArray< jdouble > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_build_18de2db1a9eda97f], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            JArray< ::java::lang::String > AttitudeType::createDataFields(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_createDataFields_b2079b25eb3f7683], a0, a1, a2.this$, a3, a4.this$));
            }

            JArray< jdouble > AttitudeType::generateData(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_generateData_749420dd471c293b], a0, a1, a2.this$, a3, a4.this$));
            }

            ::org::orekit::utils::AngularDerivativesFilter AttitudeType::getAngularDerivativesFilter() const
            {
              return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAngularDerivativesFilter_c14c1c09874639c8]));
            }

            ::java::lang::String AttitudeType::getName(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_085bbc49599fa163], a0));
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::parse(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::files::ccsds::utils::ContextBinding & a4, const JArray< ::java::lang::String > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_parse_3cd12c8f31254686], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            AttitudeType AttitudeType::parseType(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_parseType_c9429a38f03d36fe], a0.this$));
            }

            ::java::lang::String AttitudeType::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
            }

            AttitudeType AttitudeType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c9429a38f03d36fe], a0.this$));
            }

            JArray< AttitudeType > AttitudeType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AttitudeType >(env->callStaticObjectMethod(cls, mids$[mid_values_a01160436a2e54b8]));
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
            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self);
            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg);
            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AttitudeType_values(PyTypeObject *type);
            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data);
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data);
            static PyGetSetDef t_AttitudeType__fields_[] = {
              DECLARE_GET_FIELD(t_AttitudeType, angularDerivativesFilter),
              DECLARE_GET_FIELD(t_AttitudeType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeType__methods_[] = {
              DECLARE_METHOD(t_AttitudeType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, createDataFields, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, generateData, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, getAngularDerivativesFilter, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeType, getName, METH_O),
              DECLARE_METHOD(t_AttitudeType, parse, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, parseType, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, toString, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeType)[] = {
              { Py_tp_methods, t_AttitudeType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AttitudeType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AttitudeType, t_AttitudeType, AttitudeType);
            PyObject *t_AttitudeType::wrap_Object(const AttitudeType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AttitudeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AttitudeType::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeType), &PY_TYPE_DEF(AttitudeType), module, "AttitudeType", 0);
            }

            void t_AttitudeType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "class_", make_descriptor(AttitudeType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "wrapfn_", make_descriptor(t_AttitudeType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_EULER_RATES", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_EULER_RATES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION_MOMENTUM", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION_MOMENTUM)));
            }

            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeType::initializeClass, 1)))
                return NULL;
              return t_AttitudeType::wrap_Object(AttitudeType(((t_AttitudeType *) arg)->object.this$));
            }
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.build(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< ::java::lang::String > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.createDataFields(a0, a1, a2, a3, a4));
                return JArray<jstring>(result.this$).wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "createDataFields", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.generateData(a0, a1, a2, a3, a4));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "generateData", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self)
            {
              ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
            }

            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getName", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::files::ccsds::utils::ContextBinding a4((jobject) NULL);
              JArray< ::java::lang::String > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[s", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.parse(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parse", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::parseType(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "parseType", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeType), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::valueOf(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AttitudeType_values(PyTypeObject *type)
            {
              JArray< AttitudeType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::values());
              return JArray<jobject>(result.this$).wrap(t_AttitudeType::wrap_jobject);
            }
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data)
            {
              ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/Serializable.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/Ellipse.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipsoid::class$ = NULL;
      jmethodID *Ellipsoid::mids$ = NULL;
      bool Ellipsoid::live$ = false;

      jclass Ellipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb97547c6cf5fb1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDD)V");
          mids$[mid_getA_456d9a2f64d6b28d] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_456d9a2f64d6b28d] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getC_456d9a2f64d6b28d] = env->getMethodID(cls, "getC", "()D");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPlaneSection_3bfaf4cd80ac687d] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldEllipse;");
          mids$[mid_getPlaneSection_af1c511f98e824a6] = env->getMethodID(cls, "getPlaneSection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/Ellipse;");
          mids$[mid_isInside_f61e2266bee942fa] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
          mids$[mid_isInside_c8fb5394ceb559de] = env->getMethodID(cls, "isInside", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
          mids$[mid_pointOnLimb_5ff6d50248c66b4d] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointOnLimb_ccf2ee059c93e01e] = env->getMethodID(cls, "pointOnLimb", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipsoid::Ellipsoid(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb97547c6cf5fb1e, a0.this$, a1, a2, a3)) {}

      jdouble Ellipsoid::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_456d9a2f64d6b28d]);
      }

      jdouble Ellipsoid::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_456d9a2f64d6b28d]);
      }

      jdouble Ellipsoid::getC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getC_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Frame Ellipsoid::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::bodies::FieldEllipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldEllipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_3bfaf4cd80ac687d], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::Ellipse Ellipsoid::getPlaneSection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::Ellipse(env->callObjectMethod(this$, mids$[mid_getPlaneSection_af1c511f98e824a6], a0.this$, a1.this$));
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_f61e2266bee942fa], a0.this$);
      }

      jboolean Ellipsoid::isInside(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInside_c8fb5394ceb559de], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_5ff6d50248c66b4d], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipsoid::pointOnLimb(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointOnLimb_ccf2ee059c93e01e], a0.this$, a1.this$));
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
      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self);
      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args);
      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data);
      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data);
      static PyGetSetDef t_Ellipsoid__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipsoid, a),
        DECLARE_GET_FIELD(t_Ellipsoid, b),
        DECLARE_GET_FIELD(t_Ellipsoid, c),
        DECLARE_GET_FIELD(t_Ellipsoid, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipsoid__methods_[] = {
        DECLARE_METHOD(t_Ellipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipsoid, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getC, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipsoid, getPlaneSection, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, isInside, METH_VARARGS),
        DECLARE_METHOD(t_Ellipsoid, pointOnLimb, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipsoid)[] = {
        { Py_tp_methods, t_Ellipsoid__methods_ },
        { Py_tp_init, (void *) t_Ellipsoid_init_ },
        { Py_tp_getset, t_Ellipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipsoid)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipsoid, t_Ellipsoid, Ellipsoid);

      void t_Ellipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipsoid), &PY_TYPE_DEF(Ellipsoid), module, "Ellipsoid", 0);
      }

      void t_Ellipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "class_", make_descriptor(Ellipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "wrapfn_", make_descriptor(t_Ellipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipsoid::initializeClass, 1)))
          return NULL;
        return t_Ellipsoid::wrap_Object(Ellipsoid(((t_Ellipsoid *) arg)->object.this$));
      }
      static PyObject *t_Ellipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipsoid_init_(t_Ellipsoid *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        Ellipsoid object((jobject) NULL);

        if (!parseArgs(args, "kDDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = Ellipsoid(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipsoid_getA(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getB(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getC(t_Ellipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipsoid_getFrame(t_Ellipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipsoid_getPlaneSection(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldEllipse result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_FieldEllipse::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::Ellipse result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPlaneSection(a0, a1));
              return ::org::orekit::bodies::t_Ellipse::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPlaneSection", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_isInside(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isInside(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "isInside", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_pointOnLimb(t_Ellipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.pointOnLimb(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pointOnLimb", args);
        return NULL;
      }

      static PyObject *t_Ellipsoid_get__a(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__b(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__c(t_Ellipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipsoid_get__frame(t_Ellipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
