# Converter lookup fails due to memory access violation.

- In Windows.Foundation.Collections.h
```
template <typename D, typename K, typename V> WINRT_IMPL_AUTO(V) consume_Windows_Foundation_Collections_IMap<D, K, V>::Lookup(impl::param_type<K> const& key) const
{
    V winrt_impl_result{ empty_value<V>() };
    check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Collections::IMap<K, V>)->Lookup(impl::bind_in(key), put_abi(winrt_impl_result)));
    return winrt_impl_result;
}
```
If typename **V** was **Windows::Foundation::IInspectable**, its member varialbe **m_ptr** don't be initialized.
